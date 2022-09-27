// Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// Target Unity version: 2017.4.15 - 2017.4.40

// ******************************************************************************
// * IL2CPP application-specific method definition addresses and signatures
// ******************************************************************************
using namespace app;


// Map hooks
DO_APP_FUNC(0x0307B130, void, MoleMole_InLevelMapPageContext_OnMarkClicked, (InLevelMapPageContext* __this, MonoMapMark* mark, MethodInfo* method));
DO_APP_FUNC(0x03087990, void, MoleMole_InLevelMapPageContext_OnMapClicked, (InLevelMapPageContext* __this, Vector2 screenPos, MethodInfo* method));
DO_APP_FUNC(0x0307E4A0, void, MoleMole_InLevelMapPageContext_ZoomMap, (InLevelMapPageContext* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x030ACD90, void, MoleMole_InLevelMapPageContext_UpdateView, (InLevelMapPageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x05B7BC00, bool, MoleMole_MapModule_IsAreaUnlock, (MoleMole_MapModule* __this, uint32_t sceneID, uint32_t areaID, MethodInfo* method));


// should be 'op_Implicit' not 'get_value'
DO_APP_FUNC(0x01EC1630, uint16_t, MoleMole_SimpleSafeUInt16_get_Value, (SimpleSafeUInt16 v, MethodInfo* method));
DO_APP_FUNC(0x02448950, uint32_t, MoleMole_SimpleSafeUInt32_get_Value, (SimpleSafeUInt32 v, MethodInfo* method));
DO_APP_FUNC(0x053107A0, String*, Marshal_PtrToStringAnsi, (void* ptr, MethodInfo* method));


// Map utility
DO_APP_FUNC(0x010005E0, Rect, MonoInLevelMapPage_get_mapRect, (MonoInLevelMapPage* __this, MethodInfo* method));
DO_APP_FUNC(0x010005C0, Transform*, MonoInLevelMapPage_get_mapBackground, (MonoInLevelMapPage* __this, MethodInfo* method));


// Teleport hooks
DO_APP_FUNC(0x00C40600, void, GameManager_Update, (GameManager* __this, MethodInfo* method));
DO_APP_FUNC(0x019A12E0, void, MoleMole_LoadingManager_SceneGoto, (MoleMole_LoadingManager* __this, PlayerEnterSceneNotify* notify, MethodInfo* method));
DO_APP_FUNC(0x01999BA0, void, MoleMole_LoadingManager_PerformPlayerTransmit, (MoleMole_LoadingManager* __this, Vector3 targetPos, EnterType__Enum enterType, uint32_t token, EvtTransmitAvatar_EvtTransmitAvatar_TransmitType__Enum transType, uint32_t enterReason, MethodInfo* method));
DO_APP_FUNC(0x0199FE60, void, MoleMole_LoadingManager_RequestSceneTransToPoint, (MoleMole_LoadingManager* __this, uint32_t sceneId, uint32_t pointId, void* finishCallBackInForceDrag, MethodInfo* method));
DO_APP_FUNC(0x0199D050, bool, MoleMole_LoadingManager_NeedTransByServer, (MoleMole_LoadingManager* __this, uint32_t sceneId, Vector3 position, MethodInfo* method));
//DO_APP_FUNC(0x0341E6C0, Vector3, MoleMole_LocalEntityInfoData_get_initPos, (LocalEntityInfoData* __this, MethodInfo* method)); // shared offset


// Unlimited stamina
DO_APP_FUNC(0x01C71AF0, void, MoleMole_LevelSyncCombatPlugin_RequestSceneEntityMoveReq, (LevelSyncCombatPlugin* __this, uint32_t entityId, MotionInfo* syncInfo, bool isReliable, uint32_t HAOCOEMOMBG, MethodInfo* method));
DO_APP_FUNC(0x0360C6D0, void, MoleMole_DataItem_HandleNormalProp, (DataItem* __this, uint32_t type, int64_t value, DataPropOp__Enum state, MethodInfo* method));


// God mode
DO_APP_FUNC(0x02B11590, void, VCHumanoidMove_NotifyLandVelocity, (VCHumanoidMove* __this, Vector3 velocity, float reachMaxDownVelocityTime, MethodInfo* method));
DO_APP_FUNC(0x028EA770, bool, Miscs_CheckTargetAttackable, (BaseEntity* attackerEntity, BaseEntity* targetEntity, MethodInfo* method));
DO_APP_FUNC(0x03E24470, void, MoleMole_LCBaseCombat_FireBeingHitEvent, (LCBaseCombat* __this, uint32_t attackeeRuntimeID, AttackResult* attackResult, MethodInfo* method));
DO_APP_FUNC(0x0236C8B0, bool, MoleMole_ActorAbilityPlugin_HanlderModifierThinkTimerUp, (ActorAbilityPlugin* __this, float delay, Object* arg, MethodInfo* method));


// Cooldown cheats
DO_APP_FUNC(0x01114E90, bool, MoleMole_HumanoidMoveFSM_CheckSprintCooldown, (/* HumanoidMoveFSM */void* __this, MethodInfo* method));
DO_APP_FUNC(0x025A27E0, bool, MoleMole_LCAvatarCombat_IsEnergyMax, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x0259B4F0, void, MoleMole_LCAvatarCombat_ChangeEnergy_1, (LCAvatarCombat* __this, ElementType__Enum type, float value, DataPropOp__Enum state, MethodInfo* method));
DO_APP_FUNC(0x0259C410, bool, MoleMole_LCAvatarCombat_OnSkillStart, (LCAvatarCombat* __this, uint32_t skillID, float cdMultipler, MethodInfo* method));
DO_APP_FUNC(0x0259BA60, bool, MoleMole_LCAvatarCombat_IsSkillInCD_1, (LCAvatarCombat* __this, LCAvatarCombat_LCAvatarCombat_SkillInfo* skillInfo, MethodInfo* method));
DO_APP_FUNC(0x02375B30, void, MoleMole_ActorAbilityPlugin_AddDynamicFloatWithRange, (MoleMole_ActorAbilityPlugin* __this, String* key, float value, float min, float max, bool forceDoAtRemote, MethodInfo* method));

// Rapid fire
DO_APP_FUNC(0x03E284B0, void, MoleMole_LCBaseCombat_DoHitEntity, (LCBaseCombat* __this, uint32_t targetID, AttackResult* attackResult, bool ignoreCheckCanBeHitInMP, MethodInfo* method));
DO_APP_FUNC(0x00B24670, void, MoleMole_Formula_CalcAttackResult, (CombatProperty* attackCombatProperty, CombatProperty* defenseCombatProperty, AttackResult* attackResult, BaseEntity* attackerEntity, BaseEntity* attackeeEntity, MethodInfo* method));
DO_APP_FUNC(0x00D70A20, void, MoleMole_VCAnimatorEvent_HandleProcessItem, (MoleMole_VCAnimatorEvent* __this, MoleMole_VCAnimatorEvent_MoleMole_VCAnimatorEvent_AnimatorEventPatternProcessItem* processItem, AnimatorStateInfo processStateInfo, MoleMole_VCAnimatorEvent_MoleMole_VCAnimatorEvent_TriggerMode__Enum mode, MethodInfo* method));


// World cheats
DO_APP_FUNC(0x025140E0, void, MoleMole_VCMonsterAIController_TryDoSkill, (/* VCMonsterAIController */ void* __this, uint32_t skillID, MethodInfo* method)); // Manual
DO_APP_FUNC(0x01BC66B0, void, MoleMole_LCSelectPickup_AddInteeBtnByID, (void* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x01BC86B0, bool, MoleMole_LCSelectPickup_IsInPosition, (void* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x01BC71B0, bool, MoleMole_LCSelectPickup_IsOutPosition, (void* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x01778850, void, MoleMole_ItemModule_PickItem, (MoleMole_ItemModule* __this, uint32_t entityID, MethodInfo* method));
DO_APP_FUNC(0x011C87B0, void, MoleMole_LevelSceneElementViewPlugin_Tick, (LevelSceneElementViewPlugin* __this, float inDeltaTime, MethodInfo* method));


// Dialog skipping
DO_APP_FUNC(0x00ED7BF0, bool, MoleMole_TalkDialogContext_get_canClick, (TalkDialogContext* __this, MethodInfo* method)); // delete
DO_APP_FUNC(0x00ED7720, bool, MoleMole_TalkDialogContext_get_canAutoClick, (TalkDialogContext* __this, MethodInfo* method));
DO_APP_FUNC(0x00ED4D90, void, MoleMole_TalkDialogContext_OnDialogSelectItem, (TalkDialogContext* __this, Notify* notify, MethodInfo* method));
DO_APP_FUNC(0x01C09990, void, MoleMole_InLevelCutScenePageContext_OnFreeClick, (InLevelCutScenePageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x01C0BE90, void, MoleMole_InLevelCutScenePageContext_UpdateView, (InLevelCutScenePageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x01C08C20, void, MoleMole_InLevelCutScenePageContext_ClearView, (InLevelCutScenePageContext* __this, MethodInfo* method));

// Skip Cutscene | RyujinZX#6666
DO_APP_FUNC(0x02B795C0, void, CriwareMediaPlayer_Update, (CriwareMediaPlayer* __this, MethodInfo* method));
DO_APP_FUNC(0x02B793C0, void, CriwareMediaPlayer_Skip, (CriwareMediaPlayer* __this, MethodInfo* method));


// Protection bypass
DO_APP_FUNC(0x05AFD630, Byte__Array*, Application_RecordUserData, (int32_t nType, MethodInfo* method));


// Networking
DO_APP_FUNC(0x00950590, void, Kcp_KcpNative_kcp_packet_destroy, (KcpPacket_1* packet, MethodInfo* method));
DO_APP_FUNC(0x00950480, KcpPacket_1*, Kcp_KcpNative_kcp_packet_create, (uint8_t* data, int32_t len, MethodInfo* method));
DO_APP_FUNC(0x0094FCF0, int32_t, Kcp_KcpNative_kcp_client_send_packet, (void* kcp_client, KcpPacket_1* packet, MethodInfo* method));
DO_APP_FUNC(0x026C9030, bool, MoleMole_KcpClient_TryDequeueEvent, (void* __this, ClientKcpEvent* evt, MethodInfo* method));
DO_APP_FUNC(0x0133D110, void, MoleMole_Packet_XorEncrypt, (Byte__Array** bytes, int32_t length, MethodInfo* method));


// Lua functions
DO_APP_FUNC(0x031772B0, Byte__Array*, LuaManager_LoadCustomLuaFile, (LuaManager* __this, String** filePath, bool* recycleBytes, MethodInfo* method));
DO_APP_FUNC(0x03B444E0, void, Lua_xlua_pushasciistring, (void* L, String* str, MethodInfo* method));
DO_APP_FUNC(0x00B875E0, void, MoleMole_LuaShellManager_DoString, (void* __this, Byte__Array* byteArray, MethodInfo* method));
DO_APP_FUNC(0x0564F290, void*, LuaEnv_DoString, (void* __this, Byte__Array* chunk, String* chunkName, void* env, MethodInfo* method));
DO_APP_FUNC(0x00B869C0, void, MoleMole_LuaShellManager_ReportLuaShellResult, (void* __this, String* type, String* value, MethodInfo* method)); // Anticheat info


//Backdoored lua packets
DO_APP_FUNC(0x03DA1A60, void, MoleMole_PlayerModule_OnWindSeedClientNotify, (MoleMole_PlayerModule* __this, Proto_WindSeedClientNotify* notify, MethodInfo* method));
DO_APP_FUNC(0x016D7770, void, MoleMole_PlayerModule_OnReciveLuaShell, (MoleMole_PlayerModule* __this, Proto_PlayerLuaShellNotify* playerLuaShellNotify, MethodInfo* method));


// Debug hooks
//DO_APP_FUNC(0x01D2E820, AttackResult_1*, MoleMole_AttackResult_FillProtoAttackResult, (AttackResult* __this, uint32_t attackerID, uint32_t defenseId, AttackResult_1* protoAttackResult, MethodInfo* method));
DO_APP_FUNC(0x01C70BD0, void, MoleMole_LevelSyncCombatPlugin_SendFaceToDir, (void* __this, uint32_t runtimeID, Vector3 forward, MethodInfo* method));
DO_APP_FUNC(0x03B30F60, void, MoleMole_BaseEntity_FireEvent, (BaseEntity* __this, BaseEvent* e, bool immediately, MethodInfo* method));
DO_APP_FUNC(0x02378450, bool, MoleMole_ActorAbilityPlugin_OnEvent, (void* __this, BaseEvent* e, MethodInfo* method));


// Kill aura
DO_APP_FUNC(0x009724D0, void, MoleMole_EvtCrash_Init, (EvtCrash* __this, uint32_t targetID, MethodInfo* method)); // Manual offset
DO_APP_FUNC(0x041554E0, void, MoleMole_EventManager_FireEvent, (MoleMole_EventManager* __this, BaseEvent* e, bool immediately, MethodInfo* method));
DO_APP_FUNC(0x02FEA1C0, bool, MoleMole_FixedBoolStack_get_value, (FixedBoolStack* __this, MethodInfo* method));

// 3.1 changed to 'MoleMole_EventHelper_Allocate_55'
DO_APP_FUNC(0x05C67740, EvtCrash*, MoleMole_EventHelper_Allocate_103, (MethodInfo* method));
DO_APP_FUNC_METHODINFO(0x0A4BA5F8, MoleMole_EventHelper_Allocate_103__MethodInfo);

DO_APP_FUNC(0x03DD7940, void, MoleMole_BaseMoveSyncPlugin_ConvertSyncTaskToMotionInfo, (BaseMoveSyncPlugin* __this, MethodInfo* method));


// Fishing
DO_APP_FUNC(0x00DDA950, void, MoleMole_FishingModule_RequestFishCastRod, (void* __this, uint32_t baitId, uint32_t rodId, Vector3 pos, uint32_t rodEntityId, MethodInfo* method));

DO_APP_FUNC(0x00DDA560, void, MoleMole_FishingModule_RequestFishBite, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x00DD7C70, void, MoleMole_FishingModule_OnFishBiteRsp, (void* __this, FishBiteRsp* rsp, MethodInfo* method));

DO_APP_FUNC(0x00DD7F10, void, MoleMole_FishingModule_RequestFishBattleBegin, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x00DD9490, void, MoleMole_FishingModule_OnFishBattleBeginRsp, (void* __this, FishBattleBeginRsp* rsp, MethodInfo* method));

DO_APP_FUNC(0x00DD9230, void, MoleMole_FishingModule_RequestFishBattleEnd, (void* __this, FishBattleResult__Enum result, bool isAlwaysBonus, float mxBonusTime, MethodInfo* method));
DO_APP_FUNC(0x00DD9840, void, MoleMole_FishingModule_OnFishBattleEndRsp, (void* __this, FishBattleEndRsp* rsp, MethodInfo* method));

DO_APP_FUNC(0x00DDAB30, void, MoleMole_FishingModule_OnExitFishingRsp, (void* __this, void* rsp, MethodInfo* method));
DO_APP_FUNC(0x00DD7480, void, MoleMole_FishingModule_onFishChosenNotify, (void* __this, void* notify, MethodInfo* method));


// Visuals
DO_APP_FUNC(0x02749210, void, MoleMole_SCameraModuleInitialize_SetWarningLocateRatio, (SCameraModuleInitialize* __this, double deltaTime, CameraShareData* data, MethodInfo* method));
DO_APP_FUNC(0x02F95040, void, MoleMole_VCBaseSetDitherValue_set_ManagerDitherAlphaValue, (MoleMole_VCBaseSetDitherValue* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x016EF190, void, MoleMole_PlayerModule_EntityAppear, (MoleMole_PlayerModule* __this, Proto_SceneEntityInfo* entity, VisionType__Enum type, uint32_t infoParam, MethodInfo* method));

// Chest Indicator | RyujinZX#6666
DO_APP_FUNC(0x012A7200, bool, MoleMole_LCIndicatorPlugin_DoCheck, (LCIndicatorPlugin* __this, MethodInfo* method));
DO_APP_FUNC(0x012A7AE0, void, MoleMole_LCIndicatorPlugin_ShowIcon, (LCIndicatorPlugin* __this, MethodInfo* method));
DO_APP_FUNC(0x012A6390, void, MoleMole_LCIndicatorPlugin_HideIcon, (LCIndicatorPlugin* __this, MethodInfo* method));

// Auto Cooking | RyujinZX#6666
DO_APP_FUNC(0x016D0600, void, MoleMole_PlayerModule_RequestPlayerCook, (MoleMole_PlayerModule* __this, uint32_t recipeId, uint32_t avatarId, uint32_t qteQuality, uint32_t count, MethodInfo* method));
DO_APP_FUNC(0x016D1480, void, MoleMole_PlayerModule_OnPlayerCookRsp, (MoleMole_PlayerModule* __this, PlayerCookRsp* rsp, MethodInfo* method));
DO_APP_FUNC(0x02492820, void, MoleMole_CookingQtePageContext_UpdateProficiency, (CookingQtePageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x02499A20, void, MoleMole_CookingQtePageContext_CloseItemGotPanel, (CookingQtePageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x02566520, uint32_t, MoleMole_Config_CookRecipeExcelConfig_CheckCookFoodMaxNum, (uint32_t UpdateCookRecipeDic, MethodInfo* method));

// Profile Changer | RyujinZX#6666
DO_APP_FUNC(0x02ADC260, Button_1*, ProfilePage, (MonoInLevelPlayerProfilePage* __this, MethodInfo* method)); // MonoInLevelPlayerProfilePage_get_logoutButton
DO_APP_FUNC(0x0266EF00, void, ProfileEditPage, (MonoFriendInformationDialog* __this, Sprite* value, MethodInfo* method)); // MonoFriendInformationDialog_set_icon 

// Custom Weather | RyujinZX#6666
DO_APP_FUNC(0x02B927C0, bool, EnviroSky_ChangeWeather, (void* /*app::EnviroSky*/ __this, String* weatherPath, float transTime, float ratio, MethodInfo* method));
DO_APP_FUNC(0x02BBA140, void* /*app::EnviroSky*/, EnviroSky_get_Instance, (MethodInfo* method));


// Free Camera
DO_APP_FUNC(0x05A803F0, float, Camera_get_fieldOfView, (Camera* __this, MethodInfo* method));
DO_APP_FUNC(0x05A80860, void, Camera_set_fieldOfView, (Camera* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x05A7FB60, void, Camera_CopyFrom, (Camera* __this, Camera* other, MethodInfo* method));

// Game Object, Component, Transform Utility
DO_APP_FUNC(0x05B12BC0, GameObject*, GameObject_Find, (String* name, MethodInfo* method));
DO_APP_FUNC(0x05B12BD0, Component_1*, GameObject_GetComponentByName, (GameObject* __this, String* type, MethodInfo* method));
DO_APP_FUNC(0x05B13080, bool, GameObject_get_active, (GameObject* __this, MethodInfo* method));
DO_APP_FUNC(0x05B13140, void, GameObject_set_active, (GameObject* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x05B12F50, void, GameObject_SetActive, (GameObject* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x05A4DAA0, Transform*, Transform_FindChild, (Transform* __this, String* name, MethodInfo* method));
DO_APP_FUNC(0x05A4DAD0, Transform*, Transform_GetChild, (Transform* __this, int32_t index, MethodInfo* method));
DO_APP_FUNC(0x05A2D130, Component_1*, Component_1_GetComponent_1, (Component_1* __this, String* type, MethodInfo* method));
DO_APP_FUNC(0x05B12B90, GameObject*, GameObject_CreatePrimitive, (PrimitiveType__Enum type, MethodInfo* method));
DO_APP_FUNC(0x05B13120, Transform*, GameObject_get_transform, (GameObject* __this, MethodInfo* method));
DO_APP_FUNC(0x05A4EDA0, Quaternion, Transform_get_localRotation, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05A4F240, void, Transform_set_localRotation, (Transform* __this, Quaternion value, MethodInfo* method));
DO_APP_FUNC(0x05A4EDE0, Vector3, Transform_get_localScale, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05A4F250, void, Transform_set_localScale, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x05A4ED60, Vector3, Transform_get_localPosition, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05A4F230, void, Transform_set_localPosition, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x05B12B20, Component_1*, GameObject_AddComponentInternal, (GameObject* __this, String* className, MethodInfo* method));
DO_APP_FUNC(0x05B12B30, Component_1*, GameObject_AddComponent, (GameObject* __this, Type* componentType, MethodInfo* method));
DO_APP_FUNC(0x05A4A110, Object_1*, Object_1_Instantiate_2, (Object_1* original, MethodInfo* method));
DO_APP_FUNC(0x0681BCA0, Object*, Object_1_Instantiate_5, (Object* original, MethodInfo* method));
DO_APP_FUNC(0x0681BCA0, GameObject*, Object_1_Instantiate_10, (GameObject* original, MethodInfo* method));
DO_APP_FUNC(0x05A4EBC0, int32_t, Transform_get_childCount, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05A2D2E0, GameObject*, Component_1_get_gameObject, (Component_1* __this, MethodInfo* method));
DO_APP_FUNC(0x05A4A520, String*, Object_1_get_name, (Object_1* __this, MethodInfo* method));
DO_APP_FUNC(0x05B37D20, Material__Array*, Renderer_GetMaterialArray, (Renderer* __this, MethodInfo* method));
DO_APP_FUNC(0x05A2E270, void, Material_set_mainTexture, (Material* __this, Texture* value, MethodInfo* method));
DO_APP_FUNC(0x05B2DD40, Vector3, Vector3_Lerp, (Vector3 a, Vector3 b, float t, MethodInfo* method));
DO_APP_FUNC(0x05A4EBF0, Vector3, Transform_get_eulerAngles, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05A4F120, void, Transform_set_eulerAngles, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x05A4EF20, Vector3, Transform_get_right, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05A4F2D0, void, Transform_set_right, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x05A4F000, Vector3, Transform_get_up, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05A4F350, void, Transform_set_up, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x05A4EC50, Vector3, Transform_get_forward, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05A4F170, void, Transform_set_forward, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x05A4EFB0, Quaternion, Transform_get_rotation, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05A4F340, void, Transform_set_rotation, (Transform* __this, Quaternion value, MethodInfo* method));
DO_APP_FUNC(0x05A49E20, void, Object_1_Destroy_1, (Object_1* obj, MethodInfo* method));
DO_APP_FUNC(0x05A49DD0, void, Object_1_DestroyImmediate_1, (Object_1* obj, MethodInfo* method));
DO_APP_FUNC(0x05AC5E30, float, Mathf_Lerp, (float a, float b, float t, MethodInfo* method));
DO_APP_FUNC(0x05ADBF20, float, Input_GetAxis, (String* axisName, MethodInfo* method));


// Utility
DO_APP_FUNC(0x024EF3C0, String*, Text_get_text, (Text* __this, MethodInfo* method));
DO_APP_FUNC(0x05A56E10, void, Text_set_text, (Text* __this, String* value, MethodInfo* method));
DO_APP_FUNC(0x05A72870, void, Slider_1_set_minValue, (Slider_1* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x05A727F0, void, Slider_1_set_maxValue, (Slider_1* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x05A72930, void, Slider_1_set_value, (Slider_1* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x05ADCA20, Rect, Sprite_get_rect, (Sprite* __this, MethodInfo* method));
DO_APP_FUNC(0x05B5C7B0, Texture2D*, NativeGallery_LoadImageAtPath, (String* imagePath, int32_t maxSize, bool markTextureNonReadable, bool generateMipmaps, bool linearColorSpace, MethodInfo* method));
DO_APP_FUNC(0x05ADC820, Sprite*, Sprite_Create, (Texture2D* texture, Rect rect, Vector2 pivot, float pixelsPerUnit, MethodInfo* method));
DO_APP_FUNC(0x05A56920, void, Text_set_alignment, (Text* __this, TextAnchor__Enum value, MethodInfo* method));
DO_APP_FUNC(0x05A56BC0, void, Text_set_horizontalOverflow, (Text* __this, HorizontalWrapMode__Enum value, MethodInfo* method));
DO_APP_FUNC(0x05A56EB0, void, Text_set_verticalOverflow, (Text* __this, VerticalWrapMode__Enum value, MethodInfo* method));
DO_APP_FUNC(0x05A56830, bool, Text_get_resizeTextForBestFit, (Text* __this, MethodInfo* method));
DO_APP_FUNC(0x05A56C90, void, Text_set_resizeTextForBestFit, (Text* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x05A56260, int32_t, Text_get_fontSize, (Text* __this, MethodInfo* method));
DO_APP_FUNC(0x05A56A70, void, Text_set_fontSize, (Text* __this, int32_t value, MethodInfo* method));

DO_APP_FUNC(0x028E7270, float, Miscs_CalcCurrentGroundWaterHeight, (float x, float z, MethodInfo* method));
DO_APP_FUNC(0x028E6990, float, Miscs_CalcCurrentGroundHeight, (float x, float z, MethodInfo* method));
DO_APP_FUNC(0x028E6A90, float, Miscs_CalcCurrentGroundHeight_1, (float x, float z, float rayStartHeight, float rayDetectLength, int32_t layer, MethodInfo* method));
DO_APP_FUNC(0x028E6E40, Vector3, Miscs_CalcCurrentGroundNorm, (Vector3 pos, MethodInfo* method));
DO_APP_FUNC(0x028F0740, Vector3, Miscs_GenWorldPos, (Vector2 levelMapPos, MethodInfo* method));
DO_APP_FUNC(0x028F0270, Vector2, Miscs_GenLevelPos_1, (Vector3 worldPos, MethodInfo* method));
DO_APP_FUNC(0x02904BB0, int32_t, Miscs_GetSceneGroundLayerMask, (MethodInfo* method));

DO_APP_FUNC(0x051122B0, Vector3, WorldShiftManager_GetAbsolutePosition, (Vector3 pos, MethodInfo* method));
DO_APP_FUNC(0x05112450, Vector3, WorldShiftManager_GetRelativePosition, (Vector3 pos, MethodInfo* method));

DO_APP_FUNC(0x00C9BEC0, Vector3, ActorUtils_GetAvatarPos, (MethodInfo* method));
DO_APP_FUNC(0x00CA41F0, void, ActorUtils_SetAvatarPos, (Vector3 pos, MethodInfo* method));
DO_APP_FUNC(0x00CAA1F0, void, ActorUtils_SyncAvatarMotion, (int32_t state, MethodInfo* method));

DO_APP_FUNC(0x008CB4F0, Notify, Notify_CreateNotify_1, (MoleMole_NotifyTypes__Enum type, Object* body, MethodInfo* method));

// should be 'op_Implicit' not 'get_value'
DO_APP_FUNC(0x02F73CB0, float, MoleMole_SafeFloat_get_Value, (SafeFloat safeFloat, MethodInfo* method));
// should be 'op_Implicit' not 'set_value'
DO_APP_FUNC(0x02F73B40, SafeFloat, MoleMole_SafeFloat_set_Value, (float value, MethodInfo* method));

DO_APP_FUNC(0x05C62890, LCBaseCombat*, MoleMole_BaseEntity_GetLogicCombatComponent_1, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC_METHODINFO(0x0A48D968, MoleMole_BaseEntity_GetLogicCombatComponent_1__MethodInfo);

DO_APP_FUNC(0x03B1A770, String*, MoleMole_BaseEntity_ToStringRelease, (BaseEntity* __this, MethodInfo* method));

DO_APP_FUNC(0x03B31820, void, MoleMole_BaseEntity_SetRelativePosition, (BaseEntity* __this, Vector3 position, bool forceSyncToRigidbody, MethodInfo* method));
DO_APP_FUNC(0x03B2E990, void, MoleMole_BaseEntity_SetAbsolutePosition, (BaseEntity* __this, Vector3 abpos, bool forceSyncToRigidbody, MethodInfo* method));
DO_APP_FUNC(0x03B34C30, Rigidbody*, MoleMole_BaseEntity_GetRigidbody, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x03B38B60, Vector3, MoleMole_BaseEntity_GetAbsolutePosition, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x03B25660, Vector3, MoleMole_BaseEntity_GetRelativePosition, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x03B0A6C0, Vector3, MoleMole_BaseEntity_GetForward, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x03B24440, Vector3, MoleMole_BaseEntity_GetForwardFast, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x03B1CC30, Vector3, MoleMole_BaseEntity_GetRight, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x03B2BA90, Vector3, MoleMole_BaseEntity_GetUp, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x03B0B090, bool, MoleMole_BaseEntity_IsActive, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x03B1B570, Animator*, MoleMole_BaseEntity_get_animator, (BaseEntity* __this, MethodInfo* method));

// type should be 'MoleMole_VCCharacterCombat' not 'MoleMole_VCBaseMove'
// function name should be 'GetVisualCombatComponent_3' not 'GetMoveComponent_1'
DO_APP_FUNC(0x05C626C0, VCBaseMove*, MoleMole_BaseEntity_GetMoveComponent_1, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC_METHODINFO(0x0A4B8E70, MoleMole_BaseEntity_GetMoveComponent_1__MethodInfo);


DO_APP_FUNC(0x03B1AAD0, List_1_MoleMole_BaseComponent_*, MoleMole_BaseEntity_GetAllLogicComponents, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x03B0F550, GameObject*, MoleMole_BaseEntity_get_gameObject, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x00FE0420, GameObject*, MoleMole_BaseEntity_get_rootGameObject, (BaseEntity* __this, MethodInfo* method));

// type should be 'MoleMole_AvatarEntity' not 'MoleMole_BaseEntity'
DO_APP_FUNC(0x015C2DB0, BaseEntity*, MoleMole_EntityManager_GetLocalAvatarEntity, (MoleMole_EntityManager* __this, MethodInfo* method));
DO_APP_FUNC(0x015C1870, CameraEntity*, MoleMole_EntityManager_GetMainCameraEntity, (MoleMole_EntityManager* __this, MethodInfo* method));
DO_APP_FUNC(0x015C3480, BaseEntity*, MoleMole_EntityManager_GetValidEntity, (MoleMole_EntityManager* __this, uint32_t runtimeID, MethodInfo* method));
DO_APP_FUNC(0x03FC9760, bool, MoleMole_EntityManager_RemoveEntity, (MoleMole_EntityManager* __this, BaseEntity* entity, uint32_t specifiedRuntimeID, MethodInfo* method));
DO_APP_FUNC(0x03FCE3B0, bool, MoleMole_EntityManager_IsCachedEntity, (MoleMole_EntityManager* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x015C7F00, List_1_MoleMole_BaseEntity_*, MoleMole_EntityManager_GetEntities, (MoleMole_EntityManager* __this, MethodInfo* method));
DO_APP_FUNC(0x04927320, Bounds, Utils_4_GetBounds, (GameObject* go, MethodInfo* method));

// Modify | RyujinZX#6666
DO_APP_FUNC(0x01115D10, void, MoleMole_HumanoidMoveFSM_LateTick, (HumanoidMoveFSM* __this, float deltaTime, MethodInfo* method));

DO_APP_FUNC(0x02A73D70, bool, MoleMole_ScenePropManager_GetTreeTypeByPattern, (MoleMole_ScenePropManager* __this, String* pattern, MoleMole_Config_TreeType__Enum* treeType, MethodInfo* method));
DO_APP_FUNC(0x01625BB0, void, MoleMole_NetworkManager_RequestHitTreeDropNotify, (MoleMole_NetworkManager* __this, Vector3 position, Vector3 hitPostion, MoleMole_Config_TreeType__Enum treeType, MethodInfo* method));
DO_APP_FUNC(0x0135ABA0, uint64_t, MoleMole_TimeUtil_get_LocalNowMsTimeStamp, (MethodInfo* method));

DO_APP_FUNC(0x0199DD40, bool, MoleMole_LoadingManager_IsLoaded, (MoleMole_LoadingManager* __this, MethodInfo* method));

// Thanks to | RyujinZX
DO_APP_FUNC(0x01688810, void, MoleMole_LCAbilityElement_ReduceModifierDurability, (LCAbilityElement* __this, int32_t modifierDurabilityIndex, float reduceDurability, Nullable_1_Single_ deltaTime, MethodInfo* method));

DO_APP_FUNC(0x01C95F70, BaseEntity*, MoleMole_GadgetEntity_GetOwnerEntity, (GadgetEntity* __this, MethodInfo* method));

DO_APP_FUNC(0x023EC430, bool, MoleMole_UIManager_HasEnableMapCamera, (MoleMole_UIManager* __this, MethodInfo* method));
DO_APP_FUNC(0x023DCEE0, void, MoleMole_UIManager_EnableInput, (MoleMole_UIManager* __this, bool playerInput, bool clearCurInputState, bool ignoreTouch, MethodInfo* method));

DO_APP_FUNC(0x01008020, void, MonoMiniMap_Update, (MonoMiniMap* __this, MethodInfo* method));
DO_APP_FUNC(0x02C604D0, MonoMiniMap*, MonoInLevelMainPage_get_miniMap, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x03A30970, void, MoleMole_GadgetModule_OnGadgetInteractRsp, (void* __this, GadgetInteractRsp* notify, MethodInfo* method));
DO_APP_FUNC(0x03EC0CF0, float, MoleMole_InLevelMainPageContext_get_miniMapScale, (InLevelMainPageContext* __this, MethodInfo* method));


// UnityEngine
DO_APP_FUNC(0x05ACFF80, void, RenderSettings_set_fog, (bool value, MethodInfo* method));
DO_APP_FUNC(0x05AFDD10, int32_t, Application_get_targetFrameRate, (MethodInfo* method));
DO_APP_FUNC(0x05AFE150, void, Application_set_targetFrameRate, (int32_t value, MethodInfo* method));

DO_APP_FUNC(0x05B57A60, bool, RectTransformUtility_ScreenPointToLocalPointInRectangle, (void* rect, Vector2 screenPoint, void* cam, Vector2* localPoint, MethodInfo* method));

DO_APP_FUNC(0x05A4EEE0, Vector3, Transform_get_position, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x05A4DCB0, void, Transform_set_position, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x05B2D900, float, Vector3_Distance, (Vector3 a, Vector3 b, MethodInfo* method));
DO_APP_FUNC(0x05A335B0, float, Vector2_Distance, (Vector2 a, Vector2 b, MethodInfo* method));

DO_APP_FUNC(0x05A74B20, bool, Cursor_get_visible, (MethodInfo* method));
DO_APP_FUNC(0x05A74B40, void, Cursor_set_visible, (bool value, MethodInfo* method));
DO_APP_FUNC(0x05A74B30, void, Cursor_set_lockState, (CursorLockMode__Enum value, MethodInfo* method));

DO_APP_FUNC(0x059B4940, RigidbodyConstraints__Enum, Rigidbody_get_constraints, (Rigidbody* __this, MethodInfo* method));
DO_APP_FUNC(0x059B4B10, void, Rigidbody_set_constraints, (Rigidbody* __this, RigidbodyConstraints__Enum value, MethodInfo* method));
DO_APP_FUNC(0x059B4B00, void, Rigidbody_set_collisionDetectionMode, (Rigidbody* __this, CollisionDetectionMode__Enum value, MethodInfo* method));
DO_APP_FUNC(0x059B4B20, void, Rigidbody_set_detectCollisions, (Rigidbody* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x059B4B60, void, Rigidbody_set_isKinematic, (Rigidbody* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x059B4A70, Vector3, Rigidbody_get_velocity, (Rigidbody* __this, MethodInfo* method));
DO_APP_FUNC(0x059B4BD0, void, Rigidbody_set_velocity, (Rigidbody* __this, Vector3 value, MethodInfo* method));

DO_APP_FUNC(0x05B14900, float, Time_get_timeScale, (MethodInfo* method));
DO_APP_FUNC(0x05B149B0, void, Time_set_timeScale, (float value, MethodInfo* method));
DO_APP_FUNC(0x05B14820, float, Time_get_deltaTime, (MethodInfo* method));

DO_APP_FUNC(0x05A800E0, Vector3, Camera_WorldToScreenPoint, (Camera* __this, Vector3 position, MethodInfo* method));
DO_APP_FUNC(0x05A80420, Camera*, Camera_get_main, (MethodInfo* method));
DO_APP_FUNC(0x05A80560, int32_t, Camera_get_pixelWidth, (Camera* __this, MethodInfo* method));
DO_APP_FUNC(0x05A80510, int32_t, Camera_get_pixelHeight, (Camera* __this, MethodInfo* method));

DO_APP_FUNC(0x05A322F0, int32_t, Screen_get_width, (MethodInfo* method));
DO_APP_FUNC(0x05A32280, int32_t, Screen_get_height, (MethodInfo* method));

DO_APP_FUNC(0x05AB3F30, void, Animator_Play, (Animator* __this, String* stateName, int32_t layer, float normalizedTime, MethodInfo* method));
DO_APP_FUNC(0x05AB40B0, void, Animator_Rebind, (Animator* __this, MethodInfo* method));
DO_APP_FUNC(0x05AB4610, float, Animator_get_speed, (Animator* __this, MethodInfo* method));
DO_APP_FUNC(0x05AB4740, void, Animator_set_speed, (Animator* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x05AB4440, Avatar*, Animator_get_avatar, (Animator* __this, MethodInfo* method));
DO_APP_FUNC(0x04D34780, String*, Extension_GetCurrentStateName, (Animator* animator, int32_t layer, AnimatorController* animCont, MethodInfo* method));

DO_APP_FUNC(0x05B2C5B0, bool, Behaviour_get_isActiveAndEnabled, (Behaviour* __this, MethodInfo* method));

DO_APP_FUNC(0x05B14040, Vector3, Quaternion_ToEulerAngles, (Quaternion rotation, MethodInfo* method));
DO_APP_FUNC(0x05B14130, Vector3, Quaternion_get_eulerAngles, (Quaternion__Boxed* __this, MethodInfo* method));
DO_APP_FUNC(0x05A4C490, Rect, RectTransform_get_rect, (RectTransform* __this, MethodInfo* method));
DO_APP_FUNC(0x05B56F60, float, Canvas_get_scaleFactor, (/*Canvas**/void* __this, MethodInfo* method));


DO_APP_FUNC(0x01241D10, void, LevelTimeManager_SetInternalTimeOfDay, (/*LevelTimeManager**/void* __this, float inHours, bool force, bool refreshEnviroTime, MethodInfo* method));

// Open team immediately
// F3 0F 10 83 ?? ?? ?? ?? 0F 29 74 24 30 F3 0F 10 B3 ?? ?? ?? ?? 
// f3 0f 10 83 ? ? ? ? 0f 29 74 24 ? f3 0f 10 b3 ? ? ? ? 0f 2f c6 76 ? e8 ? ? ? ? 48 8b 8b ? ? ? ? f3 0f 58 c6 f3 0f 11 83 ? ? ? ? 48 85 c9
DO_APP_FUNC(0x03B78A10, bool, MoleMole_InLevelMainPageContext_DoTeamCountDown_c_Iterator0__MoveNext, (InLevelMainPageContext_DoTeamCountDown_Iterator* __this, MethodInfo* method));
// 48 89 6c 24 ? 56 48 83 ec ? 48 8b 05 ? ? ? ? 33 ed 89 6c 24 ? 48 8b f1 48 8b 90
// 48 8b 8e ? ? ? ? 40 88 ae
DO_APP_FUNC(0x026A1890, void, MoleMole_InLevelPlayerProfilePageContext_SetupView, (/*MoleMole_InLevelPlayerProfilePageContext*/void* __this, MethodInfo* method));
DO_APP_FUNC(0x0269A0B0, void, MoleMole_InLevelPlayerProfilePageContext_ClearView, (/*MoleMole_InLevelPlayerProfilePageContext*/void* __this, MethodInfo* method));


// Singletons
DO_APP_FUNC(0x06260FF0, void*, Singleton_GetInstance, (MethodInfo* method));
DO_APP_FUNC_METHODINFO(0x0A48AD58, Singleton_1_MoleMole_UIManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0A48B160, Singleton_1_MoleMole_PlayerModule__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0A48B8E8, Singleton_1_MoleMole_EntityManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0A48BAE0, Singleton_1_MoleMole_ItemModule__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0A48D530, Singleton_1_MoleMole_NetworkManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0A48DF20, Singleton_1_MoleMole_EventManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0A48E090, Singleton_1_InteractionManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0A48E098, Singleton_1_MoleMole_ScenePropManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0A48E5A0, Singleton_1_MoleMole_LoadingManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0A48F690, Singleton_1_MoleMole_MapModule__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0A49FC78, Singleton_1_MoleMole_MapManager__get_Instance__MethodInfo);

