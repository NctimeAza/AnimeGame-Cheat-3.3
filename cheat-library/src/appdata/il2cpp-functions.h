// Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// Target Unity version: 2017.4.15 - 2017.4.40

// ******************************************************************************
// * IL2CPP application-specific method definition addresses and signatures
// ******************************************************************************
using namespace app;

// Map hooks
DO_APP_FUNC(0x5DCDC30, void, MoleMole_InLevelMapPageContext_OnMarkClicked, (InLevelMapPageContext* __this, MonoMapMark* mark, MethodInfo* method));
DO_APP_FUNC(0x5DE2690, void, MoleMole_InLevelMapPageContext_OnMapClicked, (InLevelMapPageContext* __this, Vector2 screenPos, MethodInfo* method));
DO_APP_FUNC(0x5DF1730, void, MoleMole_InLevelMapPageContext_ZoomMap, (InLevelMapPageContext* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x5DF3FE0, void, MoleMole_InLevelMapPageContext_UpdateView, (InLevelMapPageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x3F82380, bool, MoleMole_MapModule_IsAreaUnlock, (MoleMole_MapModule* __this, uint32_t sceneID, uint32_t areaID, MethodInfo* method));


// should be 'op_Implicit' not 'get_value'
DO_APP_FUNC(0x421E360, uint16_t, MoleMole_SimpleSafeUInt16_get_Value, (SimpleSafeUInt16 v, MethodInfo* method));
DO_APP_FUNC(0x4189A50, uint32_t, MoleMole_SimpleSafeUInt32_get_Value, (SimpleSafeUInt32 v, MethodInfo* method));
DO_APP_FUNC(0x87EFD50, String*, Marshal_PtrToStringAnsi, (void* ptr, MethodInfo* method));


// Map utility
DO_APP_FUNC(0x2EE1430, Rect, MonoInLevelMapPage_get_mapRect, (MonoInLevelMapPage* __this, MethodInfo* method));
DO_APP_FUNC(0x2EE1410, Transform*, MonoInLevelMapPage_get_mapBackground, (MonoInLevelMapPage* __this, MethodInfo* method));


// Teleport hooks
DO_APP_FUNC(0x563BB40, void, GameManager_Update, (GameManager* __this, MethodInfo* method));
DO_APP_FUNC(0x4808360, void, MoleMole_LoadingManager_SceneGoto, (MoleMole_LoadingManager* __this, PlayerEnterSceneNotify* notify, MethodInfo* method));
DO_APP_FUNC(0x4808F30, void, MoleMole_LoadingManager_PerformPlayerTransmit, (MoleMole_LoadingManager* __this, Vector3 targetPos, EnterType__Enum enterType, uint32_t token, EvtTransmitAvatar_EvtTransmitAvatar_TransmitType__Enum transType, uint32_t enterReason, MethodInfo* method));
DO_APP_FUNC(0x4809F50, void, MoleMole_LoadingManager_RequestSceneTransToPoint, (MoleMole_LoadingManager* __this, uint32_t sceneId, uint32_t pointId, void* finishCallBackInForceDrag, MethodInfo* method));
DO_APP_FUNC(0x4809BD0, bool, MoleMole_LoadingManager_NeedTransByServer, (MoleMole_LoadingManager* __this, uint32_t sceneId, Vector3 position, MethodInfo* method));
//DO_APP_FUNC(0x0341E6C0, Vector3, MoleMole_LocalEntityInfoData_get_initPos, (LocalEntityInfoData* __this, MethodInfo* method)); // shared offset


// Unlimited stamina
DO_APP_FUNC(0x4961DB0, void, MoleMole_LevelSyncCombatPlugin_RequestSceneEntityMoveReq, (LevelSyncCombatPlugin* __this, uint32_t entityId, MotionInfo* syncInfo, bool isReliable, uint32_t HAOCOEMOMBG, MethodInfo* method));
DO_APP_FUNC(0x39F2570, void, MoleMole_DataItem_HandleNormalProp, (DataItem* __this, uint32_t type, int64_t value, DataPropOp__Enum state, MethodInfo* method));


// God mode
DO_APP_FUNC(0x316A5B0, void, VCHumanoidMove_NotifyLandVelocity, (VCHumanoidMove* __this, Vector3 velocity, float reachMaxDownVelocityTime, MethodInfo* method));
DO_APP_FUNC(0x5148560, bool, Miscs_CheckTargetAttackable, (BaseEntity* attackerEntity, BaseEntity* targetEntity, MethodInfo* method));
DO_APP_FUNC(0x4853880, void, MoleMole_LCBaseCombat_FireBeingHitEvent, (LCBaseCombat* __this, uint32_t attackeeRuntimeID, AttackResult* attackResult, MethodInfo* method));
DO_APP_FUNC(0x5330E90, bool, MoleMole_ActorAbilityPlugin_HanlderModifierThinkTimerUp, (ActorAbilityPlugin* __this, float delay, Object* arg, MethodInfo* method));


// Cooldown cheats
DO_APP_FUNC(0x594C8E0, bool, MoleMole_HumanoidMoveFSM_CheckSprintCooldown, (/* HumanoidMoveFSM */void* __this, MethodInfo* method));
DO_APP_FUNC(0x5520C60, bool, MoleMole_LCAvatarCombat_IsEnergyMax, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x5524BB0, void, MoleMole_LCAvatarCombat_ChangeEnergy_1, (LCAvatarCombat* __this, ElementType__Enum type, float value, DataPropOp__Enum state, MethodInfo* method));
DO_APP_FUNC(0x551FE70, bool, MoleMole_LCAvatarCombat_OnSkillStart, (LCAvatarCombat* __this, uint32_t skillID, float cdMultipler, MethodInfo* method));
DO_APP_FUNC(0x551DBA0, bool, MoleMole_LCAvatarCombat_IsSkillInCD_1, (LCAvatarCombat* __this, LCAvatarCombat_LCAvatarCombat_SkillInfo* skillInfo, MethodInfo* method));
DO_APP_FUNC(0x53070D0, void, MoleMole_ActorAbilityPlugin_AddDynamicFloatWithRange, (MoleMole_ActorAbilityPlugin* __this, String* key, float value, float min, float max, bool forceDoAtRemote, MethodInfo* method));

// Rapid fire
DO_APP_FUNC(0x4847460, void, MoleMole_LCBaseCombat_DoHitEntity, (LCBaseCombat* __this, uint32_t targetID, AttackResult* attackResult, bool ignoreCheckCanBeHitInMP, MethodInfo* method));
DO_APP_FUNC(0x4079D80, void, MoleMole_Formula_CalcAttackResult, (CombatProperty* attackCombatProperty, CombatProperty* defenseCombatProperty, AttackResult* attackResult, BaseEntity* attackerEntity, BaseEntity* attackeeEntity, MethodInfo* method));
DO_APP_FUNC(0x526A0A0, void, MoleMole_VCAnimatorEvent_HandleProcessItem, (MoleMole_VCAnimatorEvent* __this, MoleMole_VCAnimatorEvent_MoleMole_VCAnimatorEvent_AnimatorEventPatternProcessItem* processItem, AnimatorStateInfo processStateInfo, MoleMole_VCAnimatorEvent_MoleMole_VCAnimatorEvent_TriggerMode__Enum mode, MethodInfo* method));


// World cheats
DO_APP_FUNC(0x3C3D770, void, MoleMole_VCMonsterAIController_TryDoSkill, (/* VCMonsterAIController */ void* __this, uint32_t skillID, MethodInfo* method)); // Manual
DO_APP_FUNC(0x4187120, void, MoleMole_LCSelectPickup_AddInteeBtnByID, (void* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x4187850, bool, MoleMole_LCSelectPickup_IsInPosition, (void* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x4187A90, bool, MoleMole_LCSelectPickup_IsOutPosition, (void* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x46624B0, void, MoleMole_ItemModule_PickItem, (MoleMole_ItemModule* __this, uint32_t entityID, MethodInfo* method));
DO_APP_FUNC(0x30B4240, void, MoleMole_LevelSceneElementViewPlugin_Tick, (LevelSceneElementViewPlugin* __this, float inDeltaTime, MethodInfo* method));
// Bag item exceeded
DO_APP_FUNC(0x4663AE0, void, MoleMole_ItemModule_OnCheckAddItemExceedLimitNotify, (/*MoleMole_ItemModule* */ void* __this, /*Proto_CheckAddItemExceedLimitNotify* */ void* notify, MethodInfo* method));


// Dialog skipping
//DO_APP_FUNC(0x02873330, bool, MoleMole_TalkDialogContext_get_canClick, (TalkDialogContext* __this, MethodInfo* method));
DO_APP_FUNC(0x3FE03D0, bool, MoleMole_TalkDialogContext_get_canAutoClick, (TalkDialogContext* __this, MethodInfo* method));
DO_APP_FUNC(0x3FDEC80, void, MoleMole_TalkDialogContext_OnDialogSelectItem, (TalkDialogContext* __this, Notify* notify, MethodInfo* method));
DO_APP_FUNC(0x32B73F0, void, MoleMole_InLevelCutScenePageContext_OnFreeClick, (InLevelCutScenePageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x32BA300, void, MoleMole_InLevelCutScenePageContext_UpdateView, (InLevelCutScenePageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x32B7670, void, MoleMole_InLevelCutScenePageContext_ClearView, (InLevelCutScenePageContext* __this, MethodInfo* method));

// Skip Cutscene | RyujinZX#6666
DO_APP_FUNC(0x58B52D0, void, CriwareMediaPlayer_Update, (CriwareMediaPlayer* __this, MethodInfo* method));
DO_APP_FUNC(0x58B5190, void, CriwareMediaPlayer_Skip, (CriwareMediaPlayer* __this, MethodInfo* method));


// Protection bypass
DO_APP_FUNC(0x9036B20, Byte__Array*, Application_RecordUserData, (int32_t nType, MethodInfo* method));


// Networking
DO_APP_FUNC(0x3C91140, void, Kcp_KcpNative_kcp_packet_destroy, (KcpPacket_1* packet, MethodInfo* method));
DO_APP_FUNC(0x3C91620, KcpPacket_1*, Kcp_KcpNative_kcp_packet_create, (uint8_t* data, int32_t len, MethodInfo* method));
DO_APP_FUNC(0x3C91270, int32_t, Kcp_KcpNative_kcp_client_send_packet, (void* kcp_client, KcpPacket_1* packet, MethodInfo* method));
DO_APP_FUNC(0x2C17A10, bool, MoleMole_KcpClient_TryDequeueEvent, (void* __this, ClientKcpEvent* evt, MethodInfo* method));
DO_APP_FUNC(0x3CA4180, void, MoleMole_Packet_XorEncrypt, (Byte__Array** bytes, int32_t length, MethodInfo* method));


// Lua functions
DO_APP_FUNC(0x3B0EF10, Byte__Array*, LuaManager_LoadCustomLuaFile, (LuaManager* __this, String** filePath, bool* recycleBytes, MethodInfo* method));
DO_APP_FUNC(0x8EAE4A0, void, Lua_xlua_pushasciistring, (void* L, String* str, MethodInfo* method));
DO_APP_FUNC(0x57025D0, void, MoleMole_LuaShellManager_DoString, (void* __this, Byte__Array* byteArray, MethodInfo* method));
DO_APP_FUNC(0x85C1730, void*, LuaEnv_DoString, (void* __this, Byte__Array* chunk, String* chunkName, void* env, MethodInfo* method));
DO_APP_FUNC(0x5702DD0, void, MoleMole_LuaShellManager_ReportLuaShellResult, (void* __this, String* type, String* value, MethodInfo* method)); // Anticheat info


//Backdoored lua packets
DO_APP_FUNC(0x40B1280, void, MoleMole_PlayerModule_OnWindSeedClientNotify, (MoleMole_PlayerModule* __this, Proto_WindSeedClientNotify* notify, MethodInfo* method));
DO_APP_FUNC(0x2E18CE0, void, MoleMole_PlayerModule_OnReciveLuaShell, (MoleMole_PlayerModule* __this, Proto_PlayerLuaShellNotify* playerLuaShellNotify, MethodInfo* method));


// Debug hooks
//DO_APP_FUNC(0x01D2E820, AttackResult_1*, MoleMole_AttackResult_FillProtoAttackResult, (AttackResult* __this, uint32_t attackerID, uint32_t defenseId, AttackResult_1* protoAttackResult, MethodInfo* method));
//DO_APP_FUNC(0x0478A2A0, void, MoleMole_LevelSyncCombatPlugin_SendFaceToDir, (void* __this, uint32_t runtimeID, Vector3 forward, MethodInfo* method));
//DO_APP_FUNC(0x03898CB0, void, MoleMole_BaseEntity_FireEvent, (BaseEntity* __this, BaseEvent* e, bool immediately, MethodInfo* method)); //3.2.50: 0x5572620
DO_APP_FUNC(0x532D170, bool, MoleMole_ActorAbilityPlugin_OnEvent, (void* __this, BaseEvent* e, MethodInfo* method));


// Kill aura
DO_APP_FUNC(0x5031540, void, MoleMole_EvtCrash_Init, (EvtCrash* __this, uint32_t targetID, MethodInfo* method)); // Manual offset
DO_APP_FUNC(0x44E2D50, void, MoleMole_EventManager_FireEvent, (MoleMole_EventManager* __this, BaseEvent* e, bool immediately, MethodInfo* method));
DO_APP_FUNC(0x8EC4000, bool, MoleMole_FixedBoolStack_get_value, (FixedBoolStack* __this, MethodInfo* method));

// 3.3 ResolveCall("e8 ? ? ? ? 48 8b f8 48 85 c0 74 ? 8b d6 48 8b c8 e8 ? ? ? ? 45 33 c0");
DO_APP_FUNC(0x52D77E0, EvtCrash*, MoleMole_EventHelper_Allocate_103, (MethodInfo* method)); // might be wrong check IDA
// 3.3 ResolveMov("f3 0f 59 c9 0f 2f f9 0f 82 ? ? ? ? 48 8b 05") + 0x69;
DO_APP_FUNC_METHODINFO(0x0C75DF90, MoleMole_EventHelper_Allocate_103__MethodInfo);

DO_APP_FUNC(0x34C31B0, void, MoleMole_BaseMoveSyncPlugin_ConvertSyncTaskToMotionInfo, (BaseMoveSyncPlugin* __this, MethodInfo* method));


// Fishing
DO_APP_FUNC(0x3255580, void, MoleMole_FishingModule_RequestFishCastRod, (void* __this, uint32_t baitId, uint32_t rodId, Vector3 pos, uint32_t rodEntityId, MethodInfo* method));

DO_APP_FUNC(0x3254E60, void, MoleMole_FishingModule_RequestFishBite, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x3253240, void, MoleMole_FishingModule_OnFishBiteRsp, (void* __this, FishBiteRsp* rsp, MethodInfo* method));

DO_APP_FUNC(0x3256F40, void, MoleMole_FishingModule_RequestFishBattleBegin, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x3255390, void, MoleMole_FishingModule_OnFishBattleBeginRsp, (void* __this, FishBattleBeginRsp* rsp, MethodInfo* method));

DO_APP_FUNC(0x3254D40, void, MoleMole_FishingModule_RequestFishBattleEnd, (void* __this, FishBattleResult__Enum result, bool isAlwaysBonus, float mxBonusTime, MethodInfo* method));
DO_APP_FUNC(0x3254210, void, MoleMole_FishingModule_OnFishBattleEndRsp, (void* __this, FishBattleEndRsp* rsp, MethodInfo* method));

DO_APP_FUNC(0x3255100, void, MoleMole_FishingModule_OnExitFishingRsp, (void* __this, void* rsp, MethodInfo* method));
DO_APP_FUNC(0x3256DE0, void, MoleMole_FishingModule_onFishChosenNotify, (void* __this, void* notify, MethodInfo* method));


// Visuals
DO_APP_FUNC(0x3146F70, void, MoleMole_SCameraModuleInitialize_SetWarningLocateRatio, (SCameraModuleInitialize* __this, double deltaTime, CameraShareData* data, MethodInfo* method));
DO_APP_FUNC(0x53E67B0, void, MoleMole_VCBaseSetDitherValue_set_ManagerDitherAlphaValue, (MoleMole_VCBaseSetDitherValue* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x40B4290, void, MoleMole_PlayerModule_EntityAppear, (MoleMole_PlayerModule* __this, Proto_SceneEntityInfo* entity, VisionType__Enum type, uint32_t infoParam, MethodInfo* method));

// Chest Indicator | RyujinZX#6666
DO_APP_FUNC(0x382E900, bool, MoleMole_LCIndicatorPlugin_DoCheck, (LCIndicatorPlugin* __this, MethodInfo* method));
DO_APP_FUNC(0x382F270, void, MoleMole_LCIndicatorPlugin_ShowIcon, (LCIndicatorPlugin* __this, MethodInfo* method));
DO_APP_FUNC(0x382FEE0, void, MoleMole_LCIndicatorPlugin_HideIcon, (LCIndicatorPlugin* __this, MethodInfo* method));

// Auto Cooking | RyujinZX#6666
DO_APP_FUNC(0x40ACDB0, void, MoleMole_PlayerModule_RequestPlayerCook, (MoleMole_PlayerModule* __this, uint32_t recipeId, uint32_t avatarId, uint32_t qteQuality, uint32_t count, MethodInfo* method));
DO_APP_FUNC(0x40B4460, void, MoleMole_PlayerModule_OnPlayerCookRsp, (MoleMole_PlayerModule* __this, PlayerCookRsp* rsp, MethodInfo* method));
DO_APP_FUNC(0x3A8E950, void, MoleMole_CookingQtePageContext_UpdateProficiency, (CookingQtePageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x3BB30D0, void, MoleMole_CookingQtePageContext_CloseItemGotPanel, (CookingQtePageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x4E73A50, uint32_t, MoleMole_Config_CookRecipeExcelConfig_CheckCookFoodMaxNum, (uint32_t UpdateCookRecipeDic, MethodInfo* method));

// Profile Changer | RyujinZX#6666
DO_APP_FUNC(0x3126B80, Button_1*, ProfilePage, (MonoInLevelPlayerProfilePage* __this, MethodInfo* method)); // MonoInLevelPlayerProfilePage_get_logoutButton
DO_APP_FUNC(0x4522B30, void, ProfileEditPage, (MonoFriendInformationDialog* __this, Sprite* value, MethodInfo* method)); // MonoFriendInformationDialog_set_icon

// Custom Weather | RyujinZX#6666
DO_APP_FUNC(0x58CCCB0, bool, EnviroSky_ChangeWeather, (void* /*app::EnviroSky*/ __this, String* weatherPath, float transTime, float ratio, MethodInfo* method));
DO_APP_FUNC(0x2B37690, void* /*app::EnviroSky*/, EnviroSky_get_Instance, (MethodInfo* method));


// Free Camera
DO_APP_FUNC(0x8FAA650, float, Camera_get_fieldOfView, (Camera* __this, MethodInfo* method));
DO_APP_FUNC(0x8FAAAF0, void, Camera_set_fieldOfView, (Camera* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x8FA9DA0, void, Camera_CopyFrom, (Camera* __this, Camera* other, MethodInfo* method));

// Game Object, Component, Transform Utility
DO_APP_FUNC(0x904D480, GameObject*, GameObject_Find, (String* name, MethodInfo* method));
DO_APP_FUNC(0x904D4E0, Component_1*, GameObject_GetComponentByName, (GameObject* __this, String* type, MethodInfo* method));
DO_APP_FUNC(0x904D940, bool, GameObject_get_active, (GameObject* __this, MethodInfo* method));
DO_APP_FUNC(0x904DA10, void, GameObject_set_active, (GameObject* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x904D810, void, GameObject_SetActive, (GameObject* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x8F7A4E0, Transform*, Transform_FindChild, (Transform* __this, String* name, MethodInfo* method));
DO_APP_FUNC(0x8F7A510, Transform*, Transform_GetChild, (Transform* __this, int32_t index, MethodInfo* method));
DO_APP_FUNC(0x8F5A2E0, Component_1*, Component_1_GetComponent_1, (Component_1* __this, String* type, MethodInfo* method));
DO_APP_FUNC(0x904D450, GameObject*, GameObject_CreatePrimitive, (PrimitiveType__Enum type, MethodInfo* method));
DO_APP_FUNC(0x904D9F0, Transform*, GameObject_get_transform, (GameObject* __this, MethodInfo* method));
DO_APP_FUNC(0x8F7B800, Quaternion, Transform_get_localRotation, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x8F7A6F0, void, Transform_set_localRotation, (Transform* __this, Quaternion value, MethodInfo* method));
DO_APP_FUNC(0x8F7B840, Vector3, Transform_get_localScale, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x8F7BC90, void, Transform_set_localScale, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x8F7B7C0, Vector3, Transform_get_localPosition, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x8F7A6E0, void, Transform_set_localPosition, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x904D3E0, Component_1*, GameObject_AddComponentInternal, (GameObject* __this, String* className, MethodInfo* method));
DO_APP_FUNC(0x904D3F0, Component_1*, GameObject_AddComponent, (GameObject* __this, Type* componentType, MethodInfo* method));
DO_APP_FUNC(0x8F76CA0, Object_1*, Object_1_Instantiate_2, (Object_1* original, MethodInfo* method));
DO_APP_FUNC(0x8F7B620, int32_t, Transform_get_childCount, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x8F5A490, GameObject*, Component_1_get_gameObject, (Component_1* __this, MethodInfo* method));
DO_APP_FUNC(0x8F770E0, String*, Object_1_get_name, (Object_1* __this, MethodInfo* method));
DO_APP_FUNC(0x9072440, Material__Array*, Renderer_GetMaterialArray, (Renderer* __this, MethodInfo* method));
DO_APP_FUNC(0x8F5B420, void, Material_set_mainTexture, (Material* __this, Texture* value, MethodInfo* method));
DO_APP_FUNC(0x9069E80, Vector3, Vector3_Lerp, (Vector3 a, Vector3 b, float t, MethodInfo* method));
DO_APP_FUNC(0x8F7B650, Vector3, Transform_get_eulerAngles, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x8F7BB80, void, Transform_set_eulerAngles, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x8F7B980, Vector3, Transform_get_right, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x8F7BD10, void, Transform_set_right, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x8F7BA60, Vector3, Transform_get_up, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x8F7BD80, void, Transform_set_up, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x8F7B6B0, Vector3, Transform_get_forward, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x8F7BBD0, void, Transform_set_forward, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x8F7BA10, Quaternion, Transform_get_rotation, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x8F7A710, void, Transform_set_rotation, (Transform* __this, Quaternion value, MethodInfo* method));
DO_APP_FUNC(0x8F769E0, void, Object_1_Destroy_1, (Object_1* obj, MethodInfo* method));
DO_APP_FUNC(0x8F76990, void, Object_1_DestroyImmediate_1, (Object_1* obj, MethodInfo* method));
DO_APP_FUNC(0x9004050, float, Mathf_Lerp, (float a, float b, float t, MethodInfo* method));
DO_APP_FUNC(0x9013240, float, Input_GetAxis, (String* axisName, MethodInfo* method));


// Utility
DO_APP_FUNC(0x3E831A0, String*, Text_get_text, (Text* __this, MethodInfo* method));
DO_APP_FUNC(0x8F87620, void, Text_set_text, (Text* __this, String* value, MethodInfo* method));
DO_APP_FUNC(0x8FB3400, void, Slider_1_set_minValue, (Slider_1* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x8FB3380, void, Slider_1_set_maxValue, (Slider_1* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x8FB34C0, void, Slider_1_set_value, (Slider_1* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x9013D40, Rect, Sprite_get_rect, (Sprite* __this, MethodInfo* method));
DO_APP_FUNC(0x9097B90, Texture2D*, NativeGallery_LoadImageAtPath, (String* imagePath, int32_t maxSize, bool markTextureNonReadable, bool generateMipmaps, bool linearColorSpace, MethodInfo* method));
DO_APP_FUNC(0x9013B50, Sprite*, Sprite_Create, (Texture2D* texture, Rect rect, Vector2 pivot, float pixelsPerUnit, MethodInfo* method));
DO_APP_FUNC(0x8F87130, void, Text_set_alignment, (Text* __this, TextAnchor__Enum value, MethodInfo* method));
DO_APP_FUNC(0x8F873D0, void, Text_set_horizontalOverflow, (Text* __this, HorizontalWrapMode__Enum value, MethodInfo* method));
DO_APP_FUNC(0x8F876C0, void, Text_set_verticalOverflow, (Text* __this, VerticalWrapMode__Enum value, MethodInfo* method));
DO_APP_FUNC(0x8F87040, bool, Text_get_resizeTextForBestFit, (Text* __this, MethodInfo* method));
DO_APP_FUNC(0x8F874A0, void, Text_set_resizeTextForBestFit, (Text* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x8F86A00, int32_t, Text_get_fontSize, (Text* __this, MethodInfo* method));
DO_APP_FUNC(0x8F87280, void, Text_set_fontSize, (Text* __this, int32_t value, MethodInfo* method));

DO_APP_FUNC(0x5145550, float, Miscs_CalcCurrentGroundWaterHeight, (float x, float z, MethodInfo* method));
DO_APP_FUNC(0x5144E10, float, Miscs_CalcCurrentGroundHeight, (float x, float z, MethodInfo* method));
DO_APP_FUNC(0x5144EC0, float, Miscs_CalcCurrentGroundHeight_1, (float x, float z, float rayStartHeight, float rayDetectLength, int32_t layer, MethodInfo* method));
DO_APP_FUNC(0x5145180, Vector3, Miscs_CalcCurrentGroundNorm, (Vector3 pos, MethodInfo* method));
DO_APP_FUNC(0x514D6A0, Vector3, Miscs_GenWorldPos, (Vector2 levelMapPos, MethodInfo* method));
DO_APP_FUNC(0x514D350, Vector2, Miscs_GenLevelPos_1, (Vector3 worldPos, MethodInfo* method));
DO_APP_FUNC(0x51606F0, int32_t, Miscs_GetSceneGroundLayerMask, (MethodInfo* method));

DO_APP_FUNC(0x85841A0, Vector3, WorldShiftManager_GetAbsolutePosition, (Vector3 pos, MethodInfo* method));
DO_APP_FUNC(0x8584320, Vector3, WorldShiftManager_GetRelativePosition, (Vector3 pos, MethodInfo* method));

DO_APP_FUNC(0x4DEB2E0, Vector3, ActorUtils_GetAvatarPos, (MethodInfo* method));
DO_APP_FUNC(0x4DF2120, void, ActorUtils_SetAvatarPos, (Vector3 pos, MethodInfo* method));
DO_APP_FUNC(0x4DF7020, void, ActorUtils_SyncAvatarMotion, (int32_t state, MethodInfo* method));

//DO_APP_FUNC(0x04C5B4E0, Notify, Notify_CreateNotify_1, (MoleMole_NotifyTypes__Enum type, Object* body, MethodInfo* method));

// should be 'op_Implicit' not 'get_value'
DO_APP_FUNC(0x525CD00, float, MoleMole_SafeFloat_get_Value, (SafeFloat safeFloat, MethodInfo* method));
// should be 'op_Implicit' not 'set_value'
DO_APP_FUNC(0x525CD90, SafeFloat, MoleMole_SafeFloat_set_Value, (float value, MethodInfo* method));

// 3.3 ResolveCall("e8 ? ? ? ? 48 8b c8 48 85 c0 75 ? 48 8b 0d ? ? ? ? e8 ? ? ? ? 48 8b d8");
DO_APP_FUNC(0x52d7590, LCBaseCombat*, MoleMole_BaseEntity_GetLogicCombatComponent_1, (BaseEntity* __this, MethodInfo* method));
// 3.3 ResolveMov("48 8b 15 ? ? ? ? 48 8b cb e8 ? ? ? ? 48 8b 15 ? ? ? ? 48 8b cf 4c 8b f0");
DO_APP_FUNC_METHODINFO(0xC6ECBC0, MoleMole_BaseEntity_GetLogicCombatComponent_1__MethodInfo);

DO_APP_FUNC(0x556BD60, String*, MoleMole_BaseEntity_ToStringRelease, (BaseEntity* __this, MethodInfo* method));

DO_APP_FUNC(0x353AA60, void, MoleMole_BaseEntity_SetRelativePosition, (BaseEntity* __this, Vector3 position, bool forceSyncToRigidbody, MethodInfo* method));
DO_APP_FUNC(0x353D220, void, MoleMole_BaseEntity_SetAbsolutePosition, (BaseEntity* __this, Vector3 abpos, bool forceSyncToRigidbody, MethodInfo* method));
DO_APP_FUNC(0x35319F0, Rigidbody*, MoleMole_BaseEntity_GetRigidbody, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x352ACA0, Vector3, MoleMole_BaseEntity_GetAbsolutePosition, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x353BD50, Vector3, MoleMole_BaseEntity_GetRelativePosition, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x3541660, Vector3, MoleMole_BaseEntity_GetForward, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x352AB60, Vector3, MoleMole_BaseEntity_GetForwardFast, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x352AFC0, Vector3, MoleMole_BaseEntity_GetRight, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x3539040, Vector3, MoleMole_BaseEntity_GetUp, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x55732F0, bool, MoleMole_BaseEntity_IsActive, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x3540AA0, Animator*, MoleMole_BaseEntity_get_animator, (BaseEntity* __this, MethodInfo* method));

// type should be 'MoleMole_VCCharacterCombat' not 'MoleMole_VCBaseMove'
// function name should be 'GetVisualCombatComponent_3' not 'GetMoveComponent_1'
// 3.3 ResolveCall("e8 ? ? ? ? 48 85 c0 74 ? 4c 8b 00 48 8b c8 f3 0f 10 56");
DO_APP_FUNC(0x52D75C0, VCBaseMove*, MoleMole_BaseEntity_GetMoveComponent_1, (BaseEntity* __this, MethodInfo* method));
// 3.3 ResolveMov("48 8b 15 ? ? ? ? 48 8b ce 48 89 5c 24 ? e8 ? ? ? ? 48 85 c0");
DO_APP_FUNC_METHODINFO(0xC6F8A58, MoleMole_BaseEntity_GetMoveComponent_1__MethodInfo);


DO_APP_FUNC(0x55699A0, List_1_MoleMole_BaseComponent_*, MoleMole_BaseEntity_GetAllLogicComponents, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x3C72460, GameObject*, MoleMole_BaseEntity_get_rootGameObject, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x2B76DC0, GameObject*, MoleMole_BaseEntity_get_gameObject, (BaseEntity* __this, MethodInfo* method));


// type should be 'MoleMole_AvatarEntity' not 'MoleMole_BaseEntity'
DO_APP_FUNC(0x310CA90, BaseEntity*, MoleMole_EntityManager_GetLocalAvatarEntity, (MoleMole_EntityManager* __this, MethodInfo* method));
DO_APP_FUNC(0x3111080, CameraEntity*, MoleMole_EntityManager_GetMainCameraEntity, (MoleMole_EntityManager* __this, MethodInfo* method));
DO_APP_FUNC(0x310FBE0, BaseEntity*, MoleMole_EntityManager_GetValidEntity, (MoleMole_EntityManager* __this, uint32_t runtimeID, MethodInfo* method));
DO_APP_FUNC(0x3C6F990, bool, MoleMole_EntityManager_RemoveEntity, (MoleMole_EntityManager* __this, BaseEntity* entity, uint32_t specifiedRuntimeID, MethodInfo* method));
DO_APP_FUNC(0x3107AA0, bool, MoleMole_EntityManager_IsCachedEntity, (MoleMole_EntityManager* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x3109F10, List_1_MoleMole_BaseEntity_*, MoleMole_EntityManager_GetEntities, (MoleMole_EntityManager* __this, MethodInfo* method));
DO_APP_FUNC(0x6997300, Bounds, Utils_4_GetBounds, (GameObject* go, MethodInfo* method));

// Modify | RyujinZX#6666
DO_APP_FUNC(0x594DAD0, void, MoleMole_HumanoidMoveFSM_LateTick, (HumanoidMoveFSM* __this, float deltaTime, MethodInfo* method));

DO_APP_FUNC(0x3C7A920, bool, MoleMole_ScenePropManager_GetTreeTypeByPattern, (MoleMole_ScenePropManager* __this, String* pattern, MoleMole_Config_TreeType__Enum* treeType, MethodInfo* method));
DO_APP_FUNC(0x40D3C30, void, MoleMole_NetworkManager_RequestHitTreeDropNotify, (MoleMole_NetworkManager* __this, Vector3 position, Vector3 hitPostion, MoleMole_Config_TreeType__Enum treeType, MethodInfo* method));
DO_APP_FUNC(0x5F3F110, uint64_t, MoleMole_TimeUtil_get_LocalNowMsTimeStamp, (MethodInfo* method));

DO_APP_FUNC(0x31549E0, bool, MoleMole_LoadingManager_IsLoaded, (MoleMole_LoadingManager* __this, MethodInfo* method));

// Thanks to | RyujinZX
DO_APP_FUNC(0x436D6F0, void, MoleMole_LCAbilityElement_ReduceModifierDurability, (LCAbilityElement* __this, int32_t modifierDurabilityIndex, float reduceDurability, Nullable_1_Single_ deltaTime, MethodInfo* method));

DO_APP_FUNC(0x54251E0, BaseEntity*, MoleMole_GadgetEntity_GetOwnerEntity, (GadgetEntity* __this, MethodInfo* method));

DO_APP_FUNC(0x344CCA0, bool, MoleMole_UIManager_HasEnableMapCamera, (MoleMole_UIManager* __this, MethodInfo* method));
DO_APP_FUNC(0x3450610, void, MoleMole_UIManager_EnableInput, (MoleMole_UIManager* __this, bool playerInput, bool clearCurInputState, bool ignoreTouch, MethodInfo* method));

DO_APP_FUNC(0x2EE8360, void, MonoMiniMap_Update, (MonoMiniMap* __this, MethodInfo* method));
DO_APP_FUNC(0x5171F40, MonoMiniMap*, MonoInLevelMainPage_get_miniMap, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x5B4E500, void, MoleMole_GadgetModule_OnGadgetInteractRsp, (void* __this, GadgetInteractRsp* notify, MethodInfo* method));
DO_APP_FUNC(0x2E3CE10, float, MoleMole_InLevelMainPageContext_get_miniMapScale, (InLevelMainPageContext* __this, MethodInfo* method));


// UnityEngine
DO_APP_FUNC(0x900DDA0, void, RenderSettings_set_fog, (bool value, MethodInfo* method));
DO_APP_FUNC(0x9037180, int32_t, Application_get_targetFrameRate, (MethodInfo* method));
DO_APP_FUNC(0x9037560, void, Application_set_targetFrameRate, (int32_t value, MethodInfo* method));
DO_APP_FUNC(0x90370B0, bool, Application_get_IsFocused, (MethodInfo* method));

DO_APP_FUNC(0x9092C90, bool, RectTransformUtility_ScreenPointToLocalPointInRectangle, (void* rect, Vector2 screenPoint, void* cam, Vector2* localPoint, MethodInfo* method));

DO_APP_FUNC(0x8F7B940, Vector3, Transform_get_position, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x8F7A700, void, Transform_set_position, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x9069A50, float, Vector3_Distance, (Vector3 a, Vector3 b, MethodInfo* method));
DO_APP_FUNC(0x8F606C0, float, Vector2_Distance, (Vector2 a, Vector2 b, MethodInfo* method));

DO_APP_FUNC(0x8F9D560, bool, Cursor_get_visible, (MethodInfo* method));
DO_APP_FUNC(0x8F9D580, void, Cursor_set_visible, (bool value, MethodInfo* method));
DO_APP_FUNC(0x8F9D570, void, Cursor_set_lockState, (CursorLockMode__Enum value, MethodInfo* method));

DO_APP_FUNC(0x8EE03E0, RigidbodyConstraints__Enum, Rigidbody_get_constraints, (Rigidbody* __this, MethodInfo* method));
DO_APP_FUNC(0x8EE05B0, void, Rigidbody_set_constraints, (Rigidbody* __this, RigidbodyConstraints__Enum value, MethodInfo* method));
DO_APP_FUNC(0x8EE05A0, void, Rigidbody_set_collisionDetectionMode, (Rigidbody* __this, CollisionDetectionMode__Enum value, MethodInfo* method));
DO_APP_FUNC(0x8EE05C0, void, Rigidbody_set_detectCollisions, (Rigidbody* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x8EE0600, void, Rigidbody_set_isKinematic, (Rigidbody* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x8EE0510, Vector3, Rigidbody_get_velocity, (Rigidbody* __this, MethodInfo* method));
DO_APP_FUNC(0x8EE0660, void, Rigidbody_set_velocity, (Rigidbody* __this, Vector3 value, MethodInfo* method));

DO_APP_FUNC(0x904F6C0, float, Time_get_timeScale, (MethodInfo* method));
DO_APP_FUNC(0x904F770, void, Time_set_timeScale, (float value, MethodInfo* method));
DO_APP_FUNC(0x904F5E0, float, Time_get_deltaTime, (MethodInfo* method));

DO_APP_FUNC(0x8FAA340, Vector3, Camera_WorldToScreenPoint, (Camera* __this, Vector3 position, MethodInfo* method));
DO_APP_FUNC(0x8FAA680, Camera*, Camera_get_main, (MethodInfo* method));
DO_APP_FUNC(0x8FAA7C0, int32_t, Camera_get_pixelWidth, (Camera* __this, MethodInfo* method));
DO_APP_FUNC(0x8FAA770, int32_t, Camera_get_pixelHeight, (Camera* __this, MethodInfo* method));

DO_APP_FUNC(0x8F5F490, int32_t, Screen_get_width, (MethodInfo* method));
DO_APP_FUNC(0x8F5F420, int32_t, Screen_get_height, (MethodInfo* method));

DO_APP_FUNC(0x7E921F0, void, EmoSync_SetEmotion, (EmoSync* __this, String* emotionName, float blendTime, MethodInfo* method));
DO_APP_FUNC(0x7E92630, void, EmoSync_SetPhoneme, (EmoSync* __this, String* phonemeName, float blendTime, MethodInfo* method));
DO_APP_FUNC(0x7E91E70, void, EmoSync_ResetPhoneme, (EmoSync* __this, bool playPost, MethodInfo* method));
DO_APP_FUNC(0x7E91D50, void, EmoSync_ResetEmotion, (EmoSync* __this, bool playPost, MethodInfo* method));
DO_APP_FUNC(0x7E90FD0, void, EmoSync_EmoFinish, (EmoSync* __this, MethodInfo* method));
DO_APP_FUNC(0x7E91750, void, EmoSync_PhoFinish, (EmoSync* __this, MethodInfo* method));

DO_APP_FUNC(0x8FF23E0, void, Animator_Play, (Animator* __this, String* stateName, int32_t layer, float normalizedTime, MethodInfo* method));
DO_APP_FUNC(0x8FF2560, void, Animator_Rebind, (Animator* __this, MethodInfo* method));
DO_APP_FUNC(0x8FF2A90, float, Animator_get_speed, (Animator* __this, MethodInfo* method));
DO_APP_FUNC(0x8FF2BC0, void, Animator_set_speed, (Animator* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x8FF28C0, Avatar*, Animator_get_avatar, (Animator* __this, MethodInfo* method));
DO_APP_FUNC(0x79D40D0, String*, Extension_GetCurrentStateName, (Animator* animator, int32_t layer, AnimatorController* animCont, MethodInfo* method));

DO_APP_FUNC(0x90686C0, bool, Behaviour_get_isActiveAndEnabled, (Behaviour* __this, MethodInfo* method));

DO_APP_FUNC(0x904EC00, Vector3, Quaternion_ToEulerAngles, (Quaternion rotation, MethodInfo* method));
DO_APP_FUNC(0x285E790, Vector3, Quaternion_get_eulerAngles, (Quaternion__Boxed* __this, MethodInfo* method));
DO_APP_FUNC(0x8F78F40, Rect, RectTransform_get_rect, (RectTransform* __this, MethodInfo* method));
DO_APP_FUNC(0x9092150, float, Canvas_get_scaleFactor, (/*Canvas**/void* __this, MethodInfo* method));


DO_APP_FUNC(0x367B350, void, LevelTimeManager_SetInternalTimeOfDay, (/*LevelTimeManager**/void* __this, float inHours, bool force, bool refreshEnviroTime, MethodInfo* method));

DO_APP_FUNC(0x516C6E0, void, Miscs_SetUILocalAvatarVisible, (bool visible, MethodInfo* method));

// Open team immediately
// F3 0F 10 83 ?? ?? ?? ?? 0F 29 74 24 30 F3 0F 10 B3 ?? ?? ?? ?? 
// f3 0f 10 83 ? ? ? ? 0f 29 74 24 ? f3 0f 10 b3 ? ? ? ? 0f 2f c6 76 ? e8 ? ? ? ? 48 8b 8b ? ? ? ? f3 0f 58 c6 f3 0f 11 83 ? ? ? ? 48 85 c9
DO_APP_FUNC(0x34C8700, bool, MoleMole_InLevelMainPageContext_DoTeamCountDown_c_Iterator0__MoveNext, (InLevelMainPageContext_DoTeamCountDown_Iterator* __this, MethodInfo* method));
// 48 89 6c 24 ? 56 48 83 ec ? 48 8b 05 ? ? ? ? 33 ed 89 6c 24 ? 48 8b f1 48 8b 90
// 48 8b 8e ? ? ? ? 40 88 ae
DO_APP_FUNC(0x43BDC90, void, MoleMole_InLevelPlayerProfilePageContext_SetupView, (/*MoleMole_InLevelPlayerProfilePageContext*/void* __this, MethodInfo* method));
DO_APP_FUNC(0x43B7010, void, MoleMole_InLevelPlayerProfilePageContext_ClearView, (/*MoleMole_InLevelPlayerProfilePageContext*/void* __this, MethodInfo* method));


// Singletons
// 3.3 ResolveCall("e8 ? ? ? ? 48 85 c0 0f 84 ? ? ? ? 48 89 74 24 ? 48 8b 0d ? ? ? ? 83 b9 ? ? ? ? ? 75 ? e8 ? ? ? ? 48 8b 0d");
DO_APP_FUNC(0x2156390, void*, Singleton_GetInstance, (MethodInfo* method));

// 3.3 ResolveMov("48 8b 0d ? ? ? ? 48 8b 19 80 bb ? ? ? ? ? 75 ? 48 8b cb e8 ? ? ? ? 48 8b 43 ? 48 8b 18 80 bb ? ? ? ? ? 75 ? 48 8b cb e8 ? ? ? ? 48 8b 43 ? 48 8b 08 48 85 c9 74 ? 45 33 c0 48 8b d7 e8 ? ? ? ? 48 8b c7 48 8b 7c 24 ? 48 8b 5c 24 ? 48 8b 6c 24 ? 48 8b 74 24 ? 48 83 c4 ? 41 5e c3 e8 ? ? ? ? 48 8b c8 33 d2 e8 ? ? ? ? cc e8 ? ? ? ? cc e8 ? ? ? ? cc cc");
DO_APP_FUNC_METHODINFO(0xC6EA700, Singleton_1_MoleMole_UIManager__get_Instance__MethodInfo);

// 3.3 ResolveMov("48 8b 05 ? ? ? ? 48 8b 38 80 bf ? ? ? ? ? 75 ? 48 8b cf e8 ? ? ? ? 48 8b 47 ? 48 8b 38 80 bf ? ? ? ? ? 75 ? 48 8b cf e8 ? ? ? ? 48 8b 47 ? 48 8b 08 48 85 c9 0f 84 ? ? ? ? 48 8b 49 ? 48 85 c9 0f 84 ? ? ? ? e8 ? ? ? ? 89 83");
DO_APP_FUNC_METHODINFO(0xC6EA770, Singleton_1_MoleMole_PlayerModule__get_Instance__MethodInfo);

// 3.3 ResolveMov("48 85 c9 0f 84 ? ? ? ? e8 ? ? ? ? 84 c0 0f 85 ? ? ? ? 48 89 7c 24 ? 48 8b 0d ? ? ? ? e8 ? ? ? ? 4c 8b 05 ? ? ? ? 45 33 c9") + 0x6b;
DO_APP_FUNC_METHODINFO(0xC6ECB90, Singleton_1_MoleMole_EntityManager__get_Instance__MethodInfo);

// 3.3 ResolveMov("48 8b 7c 24 ? 4c 8b 74 24 ? 48 8b 9c 24 ? ? ? ? 48 83 c4 ? 41 5f 5e") + 0x20;
DO_APP_FUNC_METHODINFO(0xC6F0A50, Singleton_1_MoleMole_ItemModule__get_Instance__MethodInfo);

// 3.3 ResolveMov("48 8b 0d ? ? ? ? 48 89 ac 24 ? ? ? ? 8b 68");
DO_APP_FUNC_METHODINFO(0xC6EE9F8, Singleton_1_MoleMole_NetworkManager__get_Instance__MethodInfo);

// 3.3 ResolveMov("48 8b 0d ? ? ? ? e8 ? ? ? ? 48 85 c0 0f 84 ? ? ? ? 48 89 74 24 ? 48 8b 0d");
DO_APP_FUNC_METHODINFO(0xC6ECE30, Singleton_1_MoleMole_EventManager__get_Instance__MethodInfo);

// 3.3 ResolveMov("48 8b 0d ? ? ? ? e8 ? ? ? ? 4c 8b 03 48 8b cb 48 8b e8 49 8b 90 ? ? ? ? 41 ff 90 ? ? ? ? 48 85 ed 0f 84 ? ? ? ? 8b d0");
DO_APP_FUNC_METHODINFO(0xC6EF280, Singleton_1_InteractionManager__get_Instance__MethodInfo);

// 3.3 ResolveMov("48 85 c0 0f 84 ? ? ? ? 48 8b c8 e8 ? ? ? ? 84 c0 74 ? 8b bb ? ? ? ? 48 8b cb e8 ? ? ? ? 48 85 c0 0f 84 ? ? ? ? 48 8b c8 e8 ? ? ? ? 83 f8 ? 75 ? 0f 57 c9 8b cf eb ? f3 0f 10 0d ? ? ? ? 8b cf eb ? 8b 8b") + 0x5a;
DO_APP_FUNC_METHODINFO(0xC6F5348, Singleton_1_MoleMole_ScenePropManager__get_Instance__MethodInfo);

// 3.3 ResolveMov("48 8b 05 ? ? ? ? 48 8b 18 80 bb ? ? ? ? ? 75 ? 48 8b cb e8 ? ? ? ? 48 8b 43 ? 48 8b 18 80 bb ? ? ? ? ? 75 ? 48 8b cb e8 ? ? ? ? 48 8b 43 ? 48 8b 08 48 85 c9 0f 84 ? ? ? ? 8b d6 e8 ? ? ? ? 48 8b cf");
DO_APP_FUNC_METHODINFO(0xC6F7FE8, Singleton_1_MoleMole_LoadingManager__get_Instance__MethodInfo);

// 3.3 ResolveMov("48 8b 0d ? ? ? ? e8 ? ? ? ? 48 85 c0 0f 84 ? ? ? ? 8b 56 ? 48 8b c8 e8 ? ? ? ? 48 85 c0 0f 84 ? ? ? ? 48 8b 0d");
DO_APP_FUNC_METHODINFO(0xC6EDF18, Singleton_1_MoleMole_MapModule__get_Instance__MethodInfo);

// 3.3 ResolveMov("48 8b 0d ? ? ? ? e8 ? ? ? ? 48 85 c0 0f 84 ? ? ? ? 48 8b 48 ? 48 85 c9 0f 84 ? ? ? ? 48 83 c1 ? e8 ? ? ? ? 48 8b d0 66 48 0f 7e f1");;
DO_APP_FUNC_METHODINFO(0xC6F0340, Singleton_1_MoleMole_MapManager__get_Instance__MethodInfo);

DO_APP_FUNC(0x08761C10, void, RSA_FromXmlString, (RSA* __this, String* xmlString, MethodInfo* method));