#pragma region UPDATED

DO_API(0x0277C980, 0x02773E00, int, il2cpp_init, (const char* domain_name)); // a1
DO_API(0x0277CC90, 0x02774110, void, il2cpp_shutdown, ()); // a1[1]
DO_API(0x0277CBF0, 0x02774070, void, il2cpp_set_config_dir, (const char* config_path)); // a1[2]
DO_API(0x0277CC10, 0x02774090, void, il2cpp_set_data_dir, (const char* data_path)); // a1[3]
DO_API(0x0277CC80, 0x02774100, void, il2cpp_set_temp_dir, (const char* temp_path)); // a1[4]
DO_API(0x0277CBD0, 0x02774050, void, il2cpp_set_commandline_arguments, (int argc, const char* const argv[], const char* basedir)); // a1[5]
DO_API(0x0277CC00, 0x02774080, void, il2cpp_set_config_utf16, (const Il2CppChar* executablePath)); // a1[6]
DO_API(0x0277CBE0, 0x02774060, void, il2cpp_set_config, (const char* executablePath)); // a1[7]
DO_API(0x0277CC50, 0x027740D0, void, il2cpp_set_memory_callbacks, (Il2CppMemoryCallbacks* callbacks)); // a1[8]
DO_API(0x0277C930, 0x02773DB0, const Il2CppImage*, il2cpp_get_corlib, ()); // a1[9]
DO_API(0x0277C2B0, 0x02773720, void, il2cpp_add_internal_call, (const char* name, Il2CppMethodPointer method)); // a1[10]
DO_API(0x0277CB50, 0x02773FD0, Il2CppMethodPointer, il2cpp_resolve_icall, (const char* name)); // a1[11]
DO_API(0x0277C2C0, 0x02773730, void*, il2cpp_alloc, (size_t size)); // a1[12]
DO_API(0x02792A10, 0x02773CA0, void, il2cpp_free, (void* ptr)); // a1[13]
DO_API(0x0277C2D0, 0x02773740, Il2CppClass*, il2cpp_array_class_get, (Il2CppClass* element_class, uint32_t rank)); // a1[14]
DO_API(0x0277C2F0, 0x02773770, uint32_t, il2cpp_array_length, (Il2CppArray* array)); // a1[15]
DO_API(0x0279ECE0, 0x02773760, uint32_t, il2cpp_array_get_byte_length, (Il2CppArray* array)); // a1[16]
DO_API(0x0277C300, 0x02773780, Il2CppArray*, il2cpp_array_new, (Il2CppClass* elementTypeInfo, il2cpp_array_size_t length)); // a1[17]
DO_API(0x0277C320, 0x027737A0, Il2CppArray*, il2cpp_array_new_specific, (Il2CppClass* arrayTypeInfo, il2cpp_array_size_t length)); // a1[18]
DO_API(0x0277C310, 0x02773790, Il2CppArray*, il2cpp_array_new_full, (Il2CppClass* array_class, il2cpp_array_size_t* lengths, il2cpp_array_size_t* lower_bounds)); // a1[19]
DO_API(0x0277C350, 0x027737D0, Il2CppClass*, il2cpp_bounded_array_class_get, (Il2CppClass* element_class, uint32_t rank, bool bounded)); // a1[20]
DO_API(0x0277C2E0, 0x02773750, int, il2cpp_array_element_size, (const Il2CppClass* array_class)); // a1[21]
DO_API(0x0277C340, 0x027737C0, const Il2CppImage*, il2cpp_assembly_get_image, (const Il2CppAssembly* assembly)); // a1[22]
DO_API(0x0277C370, 0x027737F0, const Il2CppType*, il2cpp_class_enum_basetype, (Il2CppClass* klass)); // a1[23]
DO_API(0x0277C530, 0x027739A0, bool, il2cpp_class_is_generic, (const Il2CppClass* klass)); // a1[24]
DO_API(0x0277C540, 0x027739B0, bool, il2cpp_class_is_inflated, (const Il2CppClass* klass)); // a1[25]
DO_API(0x0277C560, 0x027739D0, bool, il2cpp_class_is_subclass_of, (Il2CppClass* klass, Il2CppClass* klassc, bool check_interfaces)); // a1[26]
DO_API(0x0277C4E0, 0x02773950, bool, il2cpp_class_has_parent, (Il2CppClass* klass, Il2CppClass* klassc)); // a1[27]
DO_API(0x0277C390, 0x02773810, Il2CppClass*, il2cpp_class_from_name, (const Il2CppImage* image, const char* namespaze, const char* name)); // a1[28]
DO_API(0x0277C3A0, 0x02773820, Il2CppClass*, il2cpp_class_from_system_type, (Il2CppReflectionType* type)); // a1[29]
DO_API(0x0277C410, 0x02773890, FieldInfo*, il2cpp_class_get_fields, (Il2CppClass* klass, void** iter)); // a1[30]
DO_API(0x0277C480, 0x02773900, Il2CppClass*, il2cpp_class_get_nested_types, (Il2CppClass* klass, void** iter)); // a1[31]
DO_API(0x0277C440, 0x027738C0, Il2CppClass*, il2cpp_class_get_interfaces, (Il2CppClass* klass, void** iter)); // a1[32]
DO_API(0x0277C400, 0x02773880, FieldInfo*, il2cpp_class_get_field_from_name, (Il2CppClass* klass, const char* name)); // a1[33]
DO_API(0x0277C450, 0x027738D0, const MethodInfo*, il2cpp_class_get_methods, (Il2CppClass* klass, void** iter)); // a1[34]
DO_API(0x0277C460, 0x027738E0, const char*, il2cpp_class_get_name, (Il2CppClass* klass)); // a1[35]
DO_API(0x0277C470, 0x027738F0, const char*, il2cpp_class_get_namespace, (Il2CppClass* klass)); // a1[36]
DO_API(0x0277C490, 0x02773910, Il2CppClass*, il2cpp_class_get_parent, (Il2CppClass* klass)); // a1[37]
DO_API(0x0277C3F0, 0x02773870, Il2CppClass*, il2cpp_class_get_declaring_type, (Il2CppClass* klass)); // a1[38]
DO_API(0x0277C4F0, 0x02773960, int32_t, il2cpp_class_instance_size, (Il2CppClass* klass)); // a1[39]
DO_API(0x02809F20, 0x02801190, bool, il2cpp_class_is_valuetype, (const Il2CppClass* klass)); // a1[40]
DO_API(0x0277C510, 0x02773980, bool, il2cpp_class_is_blittable, (const Il2CppClass* klass)); // a1[41]
DO_API(0x0277C420, 0x027738A0, int, il2cpp_class_get_flags, (const Il2CppClass* klass)); // a1[42]
DO_API(0x0277C500, 0x02773970, bool, il2cpp_class_is_abstract, (const Il2CppClass* klass)); // a1[43]
DO_API(0x0277C550, 0x027739C0, bool, il2cpp_class_is_interface, (const Il2CppClass* klass)); // a1[44]
DO_API(0x0277C360, 0x027737E0, int, il2cpp_class_array_element_size, (const Il2CppClass* klass)); // a1[45]
DO_API(0x0277C380, 0x02773800, Il2CppClass*, il2cpp_class_from_type, (const Il2CppType* type)); // a1[46]
DO_API(0x0277C4B0, 0x020EB930, void*, il2cpp_object_unbox, (Il2CppObject* obj)); // a1[47]
DO_API(0x0277C4D0, 0x02773940, bool, il2cpp_class_has_attribute, (Il2CppClass* klass, Il2CppClass* attr_class)); // a1[48]
DO_API(0x0277C520, 0x02773990, bool, il2cpp_class_is_enum, (const Il2CppClass* klass)); // a1[49]
DO_API(0x0277C3B0, 0x02773830, const char*, il2cpp_class_get_assemblyname, (const Il2CppClass* klass)); // a1[51]
DO_API(0x0277C4A0, 0x02773920, int, il2cpp_class_get_rank, (const Il2CppClass* klass)); // a1[52]
DO_API(0x021F8360, 0x020A2100, void*, il2cpp_class_get_static_field_data, (const Il2CppClass* klass)); // a1[53]
DO_API(0x0277C3E0, 0x02773860, size_t, il2cpp_class_get_bitmap_size, (const Il2CppClass* klass)); // a1[54]
DO_API(0x0277C3C0, 0x02773840, void, il2cpp_class_get_bitmap, (Il2CppClass* klass, size_t* bitmap)); // a1[55]
DO_API(0x0277C610, 0x02773A70, Il2CppDomain*, il2cpp_domain_get, ()); // a1[56]
DO_API(0x0277C600, 0x02773A60, const Il2CppAssembly*, il2cpp_domain_assembly_open, (Il2CppDomain* domain, const char* name)); // a1[57]
DO_API(0x0277CB10, 0x02773F90, void, il2cpp_raise_exception, (Il2CppException*)); // a1[58]
DO_API(0x0277C630, 0x02773A90, Il2CppException*, il2cpp_exception_from_name_msg, (const Il2CppImage* image, const char* name_space, const char* name, const char* msg)); // a1[59]
DO_API(0x0277C940, 0x02773DC0, Il2CppException*, il2cpp_get_exception_argument_null, (const char* arg)); // a1[60]
DO_API(0x0277C6E0, 0x02773B40, void, il2cpp_format_exception, (const Il2CppException* ex, char* message, int message_size)); // a1[61]
DO_API(0x0277C790, 0x02773BF0, void, il2cpp_format_stack_trace, (const Il2CppException* ex, char* output, int output_size)); // a1[62]
DO_API(0x0279C300, 0x027742E0, void, il2cpp_unhandled_exception, (Il2CppException*)); // a1[63]
DO_API(0x0277C640, 0x02773AA0, int, il2cpp_field_get_flags, (FieldInfo* field)); // a1[64]
DO_API(0x0277C650, 0x02773AB0, const char*, il2cpp_field_get_name, (FieldInfo* field)); // a1[65]
DO_API(0x0277C670, 0x02773AD0, Il2CppClass*, il2cpp_field_get_parent, (FieldInfo* field)); // a1[66]
DO_API(0x0277C660, 0x02773AC0, size_t, il2cpp_field_get_offset, (FieldInfo* field)); // a1[67]
DO_API(0x0277C680, 0x02773AE0, const Il2CppType*, il2cpp_field_get_type, (FieldInfo* field)); // a1[68]
DO_API(0x0277C690, 0x02773AF0, Il2CppObject*, il2cpp_field_get_value_object, (FieldInfo* field, Il2CppObject* obj)); // a1[69]
DO_API(0x0277C6A0, 0x02773B00, bool, il2cpp_field_has_attribute, (FieldInfo* field, Il2CppClass* attr_class)); // a1[70]
DO_API(0x0277C6D0, 0x02773B30, void, il2cpp_field_set_value_object, (Il2CppObject* instance, FieldInfo* field, Il2CppObject* value)); // a1[71]
DO_API(0x0277C6B0, 0x02773B10, bool, il2cpp_field_is_literal, (FieldInfo* field)); // a1[72]
DO_API(0x02797ED0, 0x02773CB0, void, il2cpp_gc_collect, (int maxGenerations)); // a1[73]
DO_API(0x0277C840, 0x02773CC0, int32_t, il2cpp_gc_collect_a_little, ()); // a1[74]
DO_API(0x0277C850, 0x02773CD0, void, il2cpp_gc_disable, ()); // a1[75]
DO_API(0x0277C860, 0x02773CE0, void, il2cpp_gc_enable, ()); // a1[76]
DO_API(0x0277C8A0, 0x02773D20, bool, il2cpp_gc_is_disabled, ()); // a1[77]
DO_API(0x0277C880, 0x02773D00, int64_t, il2cpp_gc_get_max_time_slice_ns, ()); // a1[78]
DO_API(0x0277C8D0, 0x02773D50, void, il2cpp_gc_set_max_time_slice_ns, (int64_t maxTimeSlice)); // a1[79]
DO_API(0x0277C8B0, 0x02773D30, bool, il2cpp_gc_is_incremental, ()); // a1[80]
DO_API(0x0277C890, 0x02773D10, int64_t, il2cpp_gc_get_used_size, ()); // a1[81]
DO_API(0x0277C870, 0x02773CF0, int64_t, il2cpp_gc_get_heap_size, ()); // a1[82]
DO_API(0x0277C8E0, 0x02773D60, void, il2cpp_gc_wbarrier_set_field, (Il2CppObject* obj, void** targetAddress, void* object)); // a1[83]
DO_API(0x0277CCB0, 0x02774130, void, il2cpp_stop_gc_world, ()); // a1[88]
DO_API(0x0277CCA0, 0x02774120, void, il2cpp_start_gc_world, ()); // a1[89]
DO_API(0x0277C900, 0x02773D80, uint32_t, il2cpp_gchandle_new, (Il2CppObject* obj, bool pinned)); // a1[90]
DO_API(0x0277C910, 0x02773D90, uint32_t, il2cpp_gchandle_new_weakref, (Il2CppObject* obj, bool track_resurrection)); // a1[91]
DO_API(0x02792A00, 0x02789DE0, void, il2cpp_gchandle_free, (uint32_t gchandle)); // a1[93]
DO_API(0x0272D520, 0x0214EEA0, uint32_t, il2cpp_offset_of_array_bounds_in_array_object_header, ()); // a1[94]
DO_API(0x0277C330, 0x027737B0, uint32_t, il2cpp_array_object_header_size, ()); // a1[95]
DO_API(0x020AF5B0, 0x020A9150, uint32_t, il2cpp_offset_of_array_length_in_array_object_header, ()); // a1[96]
DO_API(0x0277CE50, 0x02774300, void*, il2cpp_unity_liveness_calculation_begin, (Il2CppClass* filter, int max_object_count, il2cpp_register_object_callback callback, void* userdata, il2cpp_WorldChangedCallback onWorldStarted, il2cpp_WorldChangedCallback onWorldStopped)); // a1[99]
DO_API(0x0277CE60, 0x02774310, void, il2cpp_unity_liveness_calculation_end, (void* state)); // a1[100]
DO_API(0x0277CE70, 0x02774320, void, il2cpp_unity_liveness_calculation_from_root, (Il2CppObject* root, void* state)); // a1[101]
DO_API(0x0277CE80, 0x02774330, void, il2cpp_unity_liveness_calculation_from_statics, (void* state)); // a1[102]
DO_API(0x0277CA00, 0x02773E80, const Il2CppType*, il2cpp_method_get_return_type, (const MethodInfo* method)); // a1[103]
DO_API(0x0277C9C0, 0x02773E40, const char*, il2cpp_method_get_name, (const MethodInfo* method)); // a1[104]
DO_API(0x0277CA20, 0x02773EA0, bool, il2cpp_method_is_generic, (const MethodInfo* method)); // a1[105]
DO_API(0x0277CA30, 0x02773EB0, bool, il2cpp_method_is_inflated, (const MethodInfo* method)); // a1[106]
DO_API(0x0277CA40, 0x02773EC0, bool, il2cpp_method_is_instance, (const MethodInfo* method)); // a1[107]
DO_API(0x0277C9F0, 0x02773E70, uint32_t, il2cpp_method_get_param_count, (const MethodInfo* method)); // a1[108]
DO_API(0x0277C9B0, 0x02773E30, const char*, il2cpp_property_get_name, (PropertyInfo* prop)); // a1[110]
DO_API(0x0277CA10, 0x02773E90, bool, il2cpp_method_has_attribute, (const MethodInfo* method, Il2CppClass* attr_class)); // a1[111]
DO_API(0x0277CAC0, 0x02773E30, Il2CppClass*, il2cpp_object_get_class, (Il2CppObject* obj)); // a1[112]
DO_API(0x0277CAD0, 0x02773F40, uint32_t, il2cpp_object_get_size, (Il2CppObject* obj)); // a1[113]
DO_API(0x0277CAE0, 0x02773F50, const MethodInfo*, il2cpp_object_get_virtual_method, (Il2CppObject* obj, const MethodInfo* method)); // a1[114]
DO_API(0x0277CAF0, 0x02773F60, Il2CppObject*, il2cpp_object_new, (const Il2CppClass* klass)); // a1[115]
DO_API(0x0277CE90, 0x02774340, Il2CppObject*, il2cpp_value_box, (Il2CppClass* klass, void* data)); // a1[117]
DO_API(0x0277CA50, 0x02773ED0, void, il2cpp_monitor_enter, (Il2CppObject* obj)); // a1[118]
DO_API(0x0277CA90, 0x02773F10, bool, il2cpp_monitor_try_enter, (Il2CppObject* obj, uint32_t timeout)); // a1[119]
DO_API(0x0277CA60, 0x02773EE0, void, il2cpp_monitor_exit, (Il2CppObject* obj)); // a1[120]
DO_API(0x0277CA70, 0x02773EF0, void, il2cpp_monitor_pulse, (Il2CppObject* obj)); // a1[121]
DO_API(0x0277CA80, 0x02773F00, void, il2cpp_monitor_pulse_all, (Il2CppObject* obj)); // a1[122]
DO_API(0x0277CAB0, 0x02773F30, void, il2cpp_monitor_wait, (Il2CppObject* obj)); // a1[123]
DO_API(0x0277CAA0, 0x02773F20, bool, il2cpp_monitor_try_wait, (Il2CppObject* obj, uint32_t timeout)); // a1[124]
DO_API(0x0277CB60, 0x02773FE0, Il2CppObject*, il2cpp_runtime_invoke, (const MethodInfo* method, void* obj, void** params, Il2CppException** exc)); // a1[125]
DO_API(0x0277CB80, 0x02774000, Il2CppObject*, il2cpp_runtime_invoke_convert_args, (const MethodInfo* method, void* obj, Il2CppObject** params, int paramCount, Il2CppException** exc)); // a1[126]
DO_API(0x0277CBA0, 0x02774020, void, il2cpp_runtime_object_init, (Il2CppObject* obj)); // a1[127]
DO_API(0x0277CBB0, 0x02774030, void, il2cpp_runtime_object_init_exception, (Il2CppObject* obj, Il2CppException** exc)); // a1[128]
DO_API(0x0277CBC0, 0x02774040, void, il2cpp_runtime_unhandled_exception_policy_set, (Il2CppRuntimeUnhandledExceptionPolicy value)); // a1[129]
DO_API(0x0277CCF0, 0x02774170, int32_t, il2cpp_string_length, (Il2CppString* str)); // a1[130]
DO_API(0x0277CCC0, 0x02774140, Il2CppChar*, il2cpp_string_chars, (Il2CppString* str)); // a1[131]
DO_API(0x027D3900, 0x02774180, Il2CppString*, il2cpp_string_new_wrapper, (const char* str)); // a1[132]
DO_API(0x0277CD00, 0x02774190, Il2CppString*, il2cpp_string_new_len, (const char* str, uint32_t length)); // a1[133]
DO_API(0x0277CD10, 0x027741A0, Il2CppString*, il2cpp_string_new_utf16, (const Il2CppChar* text, int32_t len)); // a1[134]
DO_API(0x0280A330, 0x027741B0, Il2CppString*, il2cpp_string_new, (const char* str)); // a1[135]
DO_API(0x0277CCD0, 0x02774150, Il2CppString*, il2cpp_string_intern, (Il2CppString* str)); // a1[136]
DO_API(0x0277CCE0, 0x02774160, Il2CppString*, il2cpp_string_is_interned, (Il2CppString* str)); // a1[137]
DO_API(0x02793340, 0x0278A710, Il2CppThread*, il2cpp_thread_current, ()); // a1[138]
DO_API(0x0277CD20, 0x027741C0, Il2CppThread*, il2cpp_thread_attach, (Il2CppDomain* domain)); // a1[139]
DO_API(0x0277CD30, 0x027741D0, void, il2cpp_thread_detach, (Il2CppThread* thread)); // a1[140]
DO_API(0x0280A350, 0x028015A0, Il2CppObject*, il2cpp_type_get_object, (const Il2CppType* type)); // a1[142]
DO_API(0x0277CE20, 0x027742C0, int, il2cpp_type_get_type, (const Il2CppType* type)); // a1[143]
DO_API(0x0277CD50, 0x027741F0, Il2CppClass*, il2cpp_type_get_class_or_element_class, (const Il2CppType* type)); // a1[144]
DO_API(0x0277CD60, 0x02774200, char*, il2cpp_type_get_name, (const Il2CppType* type)); // a1[145]
DO_API(0x0277CE30, 0x027742D0, bool, il2cpp_type_is_byref, (const Il2CppType* type)); // a1[146]
DO_API(0x0277CD40, 0x027741E0, bool, il2cpp_type_equals, (const Il2CppType* type, const Il2CppType* otherType)); // a1[147]
DO_API(0x0277C920, 0x02773DA0, void, il2cpp_set_default_thread_affinity, (int64_t affinity_mask)); // a1[150]
DO_API(0x0277CC40, 0x027740C0, void, il2cpp_set_find_plugin_callback, (Il2CppSetFindPlugInCallback method)); // a1[151]
DO_API(0x0277CB40, 0x02773FC0, void, il2cpp_register_log_callback, (Il2CppLogCallback method)); // a1[152]
DO_API(0x027991D0, 0x027905C0, bool, il2cpp_is_debugger_attached, ()); // a1[164]
DO_API(0x0277C5F0, 0x02773A50, bool, il2cpp_debug_get_method_info, (const MethodInfo*, Il2CppMethodDebugInfo* methodDebugInfo)); // a1[166]
DO_API(0x0277CE40, 0x027742F0, void, il2cpp_unity_install_unitytls_interface, (const void* unitytlsInterfaceStruct)); // a1[167]
DO_API(0x0277C590, 0x027739F0, Il2CppCustomAttrInfo*, il2cpp_custom_attrs_from_class, (Il2CppClass* klass)); // a1[168]
DO_API(0x0277C5B0, 0x02773A10, Il2CppCustomAttrInfo*, il2cpp_custom_attrs_from_method, (const MethodInfo* method)); // a1[169]
DO_API(0x0277C5D0, 0x02773A30, Il2CppObject*, il2cpp_custom_attrs_get_attr, (Il2CppCustomAttrInfo* ainfo, Il2CppClass* attr_klass)); // a1[170]
DO_API(0x0277C5E0, 0x02773A40, bool, il2cpp_custom_attrs_has_attr, (Il2CppCustomAttrInfo* ainfo, Il2CppClass* attr_klass)); // a1[171]

#pragma endregion

#pragma region NOT_UPDATED

DO_API(0x0069DF80, 0x0069DF80, uint32_t, il2cpp_allocation_granularity, ());
DO_API(0x0069D4E0, 0x0069D4E0, Il2CppManagedMemorySnapshot*, il2cpp_capture_memory_snapshot, ());
DO_API(0x0069D510, 0x0069D510, void, il2cpp_class_for_each, (void(*klassReportFunc)(Il2CppClass* klass, void* userData), void* userData));
DO_API(0x00728C80, 0x00728C80, Il2CppClass*, il2cpp_class_from_il2cpp_type, (const Il2CppType* type));
DO_API(0x0069D580, 0x0069D580, uint32_t, il2cpp_class_get_data_size, (const Il2CppClass* klass));
DO_API(0x0069D5A0, 0x0069D5A0, Il2CppClass*, il2cpp_class_get_element_class, (Il2CppClass* klass));
DO_API(0x0069D5B0, 0x0069D5B0, const EventInfo*, il2cpp_class_get_events, (Il2CppClass* klass, void** iter));
DO_API(0x0069D4C0, 0x0069D4C0, const Il2CppImage*, il2cpp_class_get_image, (Il2CppClass* klass));
DO_API(0x0069D600, 0x0069D600, const MethodInfo*, il2cpp_class_get_method_from_name, (Il2CppClass* klass, const char* name, int argsCount));
DO_API(0x0069D640, 0x0069D640, const PropertyInfo*, il2cpp_class_get_properties, (Il2CppClass* klass, void** iter));
DO_API(0x0069D650, 0x0069D650, const PropertyInfo*, il2cpp_class_get_property_from_name, (Il2CppClass* klass, const char* name));
DO_API(0x006B82A0, 0x006B82A0, const Il2CppType*, il2cpp_class_get_type, (Il2CppClass* klass));
DO_API(0x0069D670, 0x0069D670, uint32_t, il2cpp_class_get_type_token, (Il2CppClass* klass));
DO_API(0x0069D680, 0x0069D680, int, il2cpp_class_get_userdata_offset, ());
DO_API(0x0069D6B0, 0x0069D6B0, bool, il2cpp_class_has_references, (Il2CppClass* klass));
DO_API(0x0069D6E0, 0x0069D6E0, bool, il2cpp_class_is_assignable_from, (Il2CppClass* klass, Il2CppClass* oklass));
DO_API(0x0069D750, 0x0069D750, size_t, il2cpp_class_num_fields, (const Il2CppClass* enumKlass));
DO_API(0x0069D760, 0x0069D760, void, il2cpp_class_set_userdata, (Il2CppClass* klass, void* userdata));
DO_API(0x0069D770, 0x0069D770, int32_t, il2cpp_class_value_size, (Il2CppClass* klass, uint32_t* align));
DO_API(0x0069D780, 0x0069D780, bool, il2cpp_current_thread_get_frame_at, (int32_t offset, Il2CppStackFrameInfo* frame));
DO_API(0x0069D790, 0x0069D790, int32_t, il2cpp_current_thread_get_stack_depth, ());
DO_API(0x0069D7B0, 0x0069D7B0, bool, il2cpp_current_thread_get_top_frame, (Il2CppStackFrameInfo* frame));
DO_API(0x0069D7C0, 0x0069D7C0, void, il2cpp_current_thread_walk_frame_stack, (Il2CppFrameWalkFunc func, void* user_data));
DO_API(0x0076A070, 0x0076A070, void, il2cpp_custom_attrs_free, (Il2CppCustomAttrInfo* ainfo));
DO_API(0x0076A070, 0x0076A070, void, il2cpp_debugger_set_agent_options, (const char* options));
DO_API(0x0069D870, 0x0069D870, const Il2CppAssembly**, il2cpp_domain_get_assemblies, (const Il2CppDomain* domain, size_t* size));
DO_API(0x0069D8F0, 0x0069D8F0, void, il2cpp_field_get_value, (Il2CppObject* obj, FieldInfo* field, void* value));
DO_API(0x0069D930, 0x0069D930, void, il2cpp_field_set_value, (Il2CppObject* obj, FieldInfo* field, void* value));
DO_API(0x0069D950, 0x0069D950, void, il2cpp_field_static_get_value, (FieldInfo* field, void* value));
DO_API(0x0069D960, 0x0069D960, void, il2cpp_field_static_set_value, (FieldInfo* field, void* value));
DO_API(0x0069DAD0, 0x0069DAD0, void, il2cpp_free_captured_memory_snapshot, (Il2CppManagedMemorySnapshot* snapshot));
DO_API(0x0069DB30, 0x0069DB30, void, il2cpp_gc_foreach_heap, (void(*func)(void* data, void* userData), void* userData));
DO_API(0x006BA0D0, 0x006BA0D0, bool, il2cpp_gc_has_strict_wbarriers, ());
DO_API(0x0076A070, 0x0076A070, void, il2cpp_gc_set_external_allocation_tracker, (void(*func)(void*, size_t, int)));
DO_API(0x0076A070, 0x0076A070, void, il2cpp_gc_set_external_wbarrier_tracker, (void(*func)(void**)));
DO_API(0x0069DBE0, 0x0069DBE0, void, il2cpp_gchandle_foreach_get_target, (void(*func)(void* data, void* userData), void* userData));
DO_API(0x0069D8E0, 0x0069D8E0, const Il2CppAssembly*, il2cpp_image_get_assembly, (const Il2CppImage* image));
DO_API(0x0069DCA0, 0x0069DCA0, const Il2CppClass*, il2cpp_image_get_class, (const Il2CppImage* image, size_t index));
DO_API(0x0069DCB0, 0x0069DCB0, size_t, il2cpp_image_get_class_count, (const Il2CppImage* image));
DO_API(0x0069DCC0, 0x0069DCC0, const MethodInfo*, il2cpp_image_get_entry_point, (const Il2CppImage* image));
DO_API(0x0069D4C0, 0x0069D4C0, const char*, il2cpp_image_get_filename, (const Il2CppImage* image));
DO_API(0x0069D4C0, 0x0069D4C0, const char*, il2cpp_image_get_name, (const Il2CppImage* image));
DO_API(0x0069DD20, 0x0069DD20, int, il2cpp_init_utf16, (const Il2CppChar* domain_name));
DO_API(0x0069DDD0, 0x0069DDD0, bool, il2cpp_is_vm_thread, (Il2CppThread* thread));
DO_API(0x0069E020, 0x0069E020, Il2CppClass*, il2cpp_method_get_class, (const MethodInfo* method));
DO_API(0x0069E020, 0x0069E020, Il2CppClass*, il2cpp_method_get_declaring_type, (const MethodInfo* method));
DO_API(0x0069DDE0, 0x0069DDE0, uint32_t, il2cpp_method_get_flags, (const MethodInfo* method, uint32_t* iflags));
DO_API(0x0069D8E0, 0x0069D8E0, const MethodInfo*, il2cpp_method_get_from_reflection, (const Il2CppReflectionMethod* method));
DO_API(0x0069DE20, 0x0069DE20, Il2CppReflectionMethod*, il2cpp_method_get_object, (const MethodInfo* method, Il2CppClass* refclass));
DO_API(0x0069DE30, 0x0069DE30, const Il2CppType*, il2cpp_method_get_param, (const MethodInfo* method, uint32_t index));
DO_API(0x0069DE50, 0x0069DE50, const char*, il2cpp_method_get_param_name, (const MethodInfo* method, uint32_t index));
DO_API(0x0069DE70, 0x0069DE70, uint32_t, il2cpp_method_get_token, (const MethodInfo* method));
DO_API(0x0069DF80, 0x0069DF80, uint32_t, il2cpp_object_header_size, ());
DO_API(0x0069DF90, 0x0069DF90, void, il2cpp_override_stack_backtrace, (Il2CppBacktraceFunc stackBacktraceFunc));
DO_API(0x0069E010, 0x0069E010, uint32_t, il2cpp_property_get_flags, (PropertyInfo* prop));
DO_API(0x0069D8E0, 0x0069D8E0, const MethodInfo*, il2cpp_property_get_get_method, (PropertyInfo* prop));
DO_API(0x0069D4C0, 0x0069D4C0, Il2CppClass*, il2cpp_property_get_parent, (PropertyInfo* prop));
DO_API(0x0069E030, 0x0069E030, const MethodInfo*, il2cpp_property_get_set_method, (PropertyInfo* prop));
DO_API(0x0076A070, 0x0076A070, void, il2cpp_register_debugger_agent_transport, (Il2CppDebuggerTransport* debuggerTransport));
DO_API(0x00729090, 0x00729090, void, il2cpp_runtime_class_init, (Il2CppClass* klass));
DO_API(0x0069E110, 0x0069E110, void, il2cpp_set_commandline_arguments_utf16, (int argc, const Il2CppChar* const argv[], const char* basedir));
DO_API(0x006BA0D0, 0x006BA0D0, bool, il2cpp_stats_dump_to_file, (const char* path));
DO_API(0x006C34A0, 0x006C34A0, uint64_t, il2cpp_stats_get_value, (Il2CppStat stat));
DO_API(0x0069E290, 0x0069E290, Il2CppThread**, il2cpp_thread_get_all_attached_threads, (size_t* size));
DO_API(0x0069E2A0, 0x0069E2A0, bool, il2cpp_thread_get_frame_at, (Il2CppThread* thread, int32_t offset, Il2CppStackFrameInfo* frame));
DO_API(0x0069E2B0, 0x0069E2B0, int32_t, il2cpp_thread_get_stack_depth, (Il2CppThread* thread));
DO_API(0x0069E2C0, 0x0069E2C0, bool, il2cpp_thread_get_top_frame, (Il2CppThread* thread, Il2CppStackFrameInfo* frame));
DO_API(0x0069E2D0, 0x0069E2D0, void, il2cpp_thread_walk_frame_stack, (Il2CppThread* thread, Il2CppFrameWalkFunc func, void* user_data));
DO_API(0x0069E2F0, 0x0069E2F0, char*, il2cpp_type_get_assembly_qualified_name, (const Il2CppType* type));
DO_API(0x0069E3B0, 0x0069E3B0, uint32_t, il2cpp_type_get_attrs, (const Il2CppType* type));
DO_API(0x0069E490, 0x0069E490, void, il2cpp_type_get_name_chunked, (const Il2CppType* type, void(*chunkReportFunc)(void* data, void* userData), void* userData));
DO_API(0x0069E4D0, 0x0069E4D0, bool, il2cpp_type_is_pointer_type, (const Il2CppType* type));
DO_API(0x0069E4E0, 0x0069E4E0, bool, il2cpp_type_is_static, (const Il2CppType* type));

#pragma endregion

/* Undefined functions:
#define (name) (offset_os), (offset_cn)

#define il2cpp_gc_set_enable_get_mem_address_hint_ptr 0x0277C8C0, 0x02773D40 // a1[87]
#define il2cpp_gchandle_get_target_ptr 0x0277C8F0, 0x02773D70 // a1[92]
#define il2cpp_enable_object_type_mutex_ptr 0x0277C620, 0x02773A80 // a1[141]
#define il2cpp_get_hash_table_memory_ptr 0x0277C950, 0x02773DD0 // a1[148]
#define il2cpp_get_meta_data_pool_memory_ptr 0x0277C960, 0x02773DE0 // a1[149]
#define il2cpp_register_filemodify_callback_ptr 0x0277CB30, 0x02773FB0 // a1[153]
#define il2cpp_register_filedelete_callback_ptr 0x0277CB20, 0x02773FA0 // a1[154]
#define il2cpp_set_disable_gc_parallel_mark_ptr 0x0277CC30, 0x027740B0 // a1[155]
#define il2cpp_set_parallel_android_affinity_ptr 0x0277CC60, 0x027740E0 // a1[156]
#define il2cpp_set_parallel_android_cupcount_ptr 0x0277CC70, 0x027740F0 // a1[157]
#define il2cpp_custom_attrs_construct_ptr 0x0277C580, 0x027739E0 // a1[172]
#define il2cpp_gc_dump_append_text_to_log_ptr 0x0069DB10, 0x0069DB10
#define il2cpp_gc_dump_info_ptr 0x0069DB10, 0x0069DB10
#define il2cpp_gc_dump_set_large_allocated_block_found_callback_ptr 0x0069DB10, 0x0069DB10
#define il2cpp_gc_dump_set_small_allocated_block_found_callback_ptr 0x0069DB10, 0x0069DB10
#define il2cpp_gc_set_object_malloc_callback_ptr 0x0069DB10, 0x0069DB10
#define il2cpp_gc_set_object_return_freelist_callback_ptr 0x0069DB10, 0x0069DB10
#define il2cpp_get_committed_memory_size_ptr 0x0069DC40, 0x0069DC40
#define il2cpp_init_security_ptr 0x0069DD00, 0x0069DD00
#define il2cpp_profiler_install_ptr 0x0069DFA0, 0x0069DFA0
#define il2cpp_profiler_install_allocation_ptr 0x0069DFB0, 0x0069DFB0
#define il2cpp_profiler_install_enter_leave_ptr 0x0069DFC0, 0x0069DFC0
#define il2cpp_profiler_install_fileio_ptr 0x0069DFD0, 0x0069DFD0
#define il2cpp_profiler_install_gc_ptr 0x0069DFE0, 0x0069DFE0
#define il2cpp_profiler_install_thread_ptr 0x0069DFF0, 0x0069DFF0
#define il2cpp_profiler_set_events_ptr 0x0069E000, 0x0069E000
#define il2cpp_set_output_redirected_file_path_ptr 0x0069DB10, 0x0069DB10
*/