#pragma once

#include <string>
#include <map>
#include <optional>

#include <Windows.h>

#include <imgui.h>

class ImageLoader
{
public:
	struct ImageData
	{
		ImTextureID textureID;
		ImVec2 size;
	};

	struct GIFData
	{
		std::vector<ImTextureID> textureIDs;
		std::vector<uint32_t> frame_delays; //show current frame for i*(1/100) of a sec
		std::vector<ImVec2> size;
		uint32_t current_frame = 0;
		std::chrono::system_clock::time_point current_time = std::chrono::system_clock::now();
		std::chrono::system_clock::time_point previous_time = std::chrono::system_clock::now();

		uint32_t next_frame() 
		{ 
			current_frame = (++current_frame) % textureIDs.size();
			return current_frame;
		}

		bool is_next_frame()
		{
			current_time = std::chrono::system_clock::now();
			std::chrono::duration<double, std::milli> elapsed_time = current_time - previous_time;
			if (elapsed_time.count() >= (frame_delays[current_frame] * 1 / 100))
			{
				previous_time = current_time;
				return true;
			}
			return false;
		}
	};

	static std::optional<ImageData> GetImage(const std::string& imageName, const char* imageType = "PNG");
	static std::optional<GIFData*> GetGif(const std::string& imageName, const char* imageType = "GIF");

private:
	inline static std::map<std::string, ImageData> s_Textures {};
	inline static std::map<std::string, GIFData> s_GIFS {};
};