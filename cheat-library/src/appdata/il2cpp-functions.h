// Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// Target Unity version: 2017.4.15 - 2017.4.40

// ******************************************************************************
// * IL2CPP application-specific method definition addresses and signatures
// ******************************************************************************
using namespace app;

// Map hooks
DO_APP_FUNC(0x05C4DBD0, 0x05D0BC70, void, MoleMole_InLevelMapPageContext_OnMarkClicked, (InLevelMapPageContext* __this, MonoMapMark* mark, MethodInfo* method));
DO_APP_FUNC(0x05C21240, 0x05CDEB60, void, MoleMole_InLevelMapPageContext_OnMapClicked, (InLevelMapPageContext* __this, Vector2 screenPos, MethodInfo* method));
DO_APP_FUNC(0x05C67650, 0x05D25A90, void, MoleMole_InLevelMapPageContext_ZoomMap, (InLevelMapPageContext* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x05C68B70, 0x05D27020, void, MoleMole_InLevelMapPageContext_UpdateView, (InLevelMapPageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x02A9EF10, 0x02A9F6F0, bool, MoleMole_MapModule_IsAreaUnlock, (MoleMole_MapModule* __this, uint32_t sceneID, uint32_t areaID, MethodInfo* method));


// should be 'op_Implicit' not 'get_value'
DO_APP_FUNC(0x03C736A0, 0x03CB79F0, uint16_t, MoleMole_SimpleSafeUInt16_get_Value, (SimpleSafeUInt16 v, MethodInfo* method));
DO_APP_FUNC(0x032F2D30, 0x03313A90, uint32_t, MoleMole_SimpleSafeUInt32_get_Value, (SimpleSafeUInt32 v, MethodInfo* method));
DO_APP_FUNC(0x08DD2880, 0x08EBB6D0, String*, Marshal_PtrToStringAnsi, (void* ptr, MethodInfo* method));


// Map utility
DO_APP_FUNC(0x02E594D0, 0x02E686B0, Rect, MonoInLevelMapPage_get_mapRect, (MonoInLevelMapPage* __this, MethodInfo* method));
DO_APP_FUNC(0x02E594B0, 0x02E68690, Transform*, MonoInLevelMapPage_get_mapBackground, (MonoInLevelMapPage* __this, MethodInfo* method));


// Teleport hooks
DO_APP_FUNC(0x03599EC0, 0x035C44A0, void, GameManager_Update, (GameManager* __this, MethodInfo* method));
DO_APP_FUNC(0x02A8EED0, 0x02A8F210, void, MoleMole_LoadingManager_SceneGoto, (MoleMole_LoadingManager* __this, PlayerEnterSceneNotify* notify, MethodInfo* method));
DO_APP_FUNC(0x02A88700, 0x02A888A0, void, MoleMole_LoadingManager_PerformPlayerTransmit, (MoleMole_LoadingManager* __this, Vector3 targetPos, EnterType__Enum enterType, uint32_t token, EvtTransmitAvatar_EvtTransmitAvatar_TransmitType__Enum transType, uint32_t enterReason, MethodInfo* method));
DO_APP_FUNC(0x02A87AE0, 0x02A87C50, void, MoleMole_LoadingManager_RequestSceneTransToPoint, (MoleMole_LoadingManager* __this, uint32_t sceneId, uint32_t pointId, void* finishCallBackInForceDrag, MethodInfo* method));
DO_APP_FUNC(0x02A89D60, 0x02A89F40, bool, MoleMole_LoadingManager_NeedTransByServer, (MoleMole_LoadingManager* __this, uint32_t sceneId, Vector3 position, MethodInfo* method));
//DO_APP_FUNC(0x0341E6C0, 0x0341E6C0, Vector3, MoleMole_LocalEntityInfoData_get_initPos, (LocalEntityInfoData* __this, MethodInfo* method)); // shared offset


// Unlimited stamina
DO_APP_FUNC(0x047EA1A0, 0x04859350, void, MoleMole_LevelSyncCombatPlugin_RequestSceneEntityMoveReq, (LevelSyncCombatPlugin* __this, uint32_t entityId, MotionInfo* syncInfo, bool isReliable, uint32_t HAOCOEMOMBG, MethodInfo* method));
DO_APP_FUNC(0x05272C30, 0x0530B1F0, void, MoleMole_DataItem_HandleNormalProp, (DataItem* __this, uint32_t type, int64_t value, DataPropOp__Enum state, MethodInfo* method));


// God mode
DO_APP_FUNC(0x0339C400, 0x033BF610, void, VCHumanoidMove_NotifyLandVelocity, (VCHumanoidMove* __this, Vector3 velocity, float reachMaxDownVelocityTime, MethodInfo* method));
DO_APP_FUNC(0x05100870, 0x05192BC0, bool, Miscs_CheckTargetAttackable, (BaseEntity* attackerEntity, BaseEntity* targetEntity, MethodInfo* method));
DO_APP_FUNC(0x05441070, 0x054DFA50, void, MoleMole_LCBaseCombat_FireBeingHitEvent, (LCBaseCombat* __this, uint32_t attackeeRuntimeID, AttackResult* attackResult, MethodInfo* method));
DO_APP_FUNC(0x050889C0, 0x05119670, bool, MoleMole_ActorAbilityPlugin_HanlderModifierThinkTimerUp, (ActorAbilityPlugin* __this, float delay, Object* arg, MethodInfo* method));


// Cooldown cheats
DO_APP_FUNC(0x0308E480, 0x030A5790, bool, MoleMole_HumanoidMoveFSM_CheckSprintCooldown, (/* HumanoidMoveFSM */void* __this, MethodInfo* method));
DO_APP_FUNC(0x02BF9CE0, 0x02BFF6A0, bool, MoleMole_LCAvatarCombat_IsEnergyMax, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x02C02390, 0x02C07F20, void, MoleMole_LCAvatarCombat_ChangeEnergy_1, (LCAvatarCombat* __this, ElementType__Enum type, float value, DataPropOp__Enum state, MethodInfo* method));
DO_APP_FUNC(0x02BFCC00, 0x02C02650, bool, MoleMole_LCAvatarCombat_OnSkillStart, (LCAvatarCombat* __this, uint32_t skillID, float cdMultipler, MethodInfo* method));
DO_APP_FUNC(0x02BFF820, 0x02C05320, bool, MoleMole_LCAvatarCombat_IsSkillInCD_1, (LCAvatarCombat* __this, LCAvatarCombat_LCAvatarCombat_SkillInfo* skillInfo, MethodInfo* method));
DO_APP_FUNC(0x05076BD0, 0x051075A0, void, MoleMole_ActorAbilityPlugin_AddDynamicFloatWithRange, (MoleMole_ActorAbilityPlugin* __this, String* key, float value, float min, float max, bool forceDoAtRemote, MethodInfo* method));

// Rapid fire
DO_APP_FUNC(0x054370F0, 0x054D5970, void, MoleMole_LCBaseCombat_DoHitEntity, (LCBaseCombat* __this, uint32_t targetID, AttackResult* attackResult, bool ignoreCheckCanBeHitInMP, MethodInfo* method));
DO_APP_FUNC(0x03139F80, 0x03153C80, void, MoleMole_Formula_CalcAttackResult, (CombatProperty* attackCombatProperty, CombatProperty* defenseCombatProperty, AttackResult* attackResult, BaseEntity* attackerEntity, BaseEntity* attackeeEntity, MethodInfo* method));
DO_APP_FUNC(0x046CEF30, 0x0473A010, void, MoleMole_VCAnimatorEvent_HandleProcessItem, (MoleMole_VCAnimatorEvent* __this, MoleMole_VCAnimatorEvent_MoleMole_VCAnimatorEvent_AnimatorEventPatternProcessItem* processItem, AnimatorStateInfo processStateInfo, MoleMole_VCAnimatorEvent_MoleMole_VCAnimatorEvent_TriggerMode__Enum mode, MethodInfo* method));


// World cheats
DO_APP_FUNC(0x02A59770, 0x02A59180, void, MoleMole_VCMonsterAIController_TryDoSkill, (/* VCMonsterAIController */ void* __this, uint32_t skillID, MethodInfo* method)); // Manual
DO_APP_FUNC(0x048AD320, 0x0491FEA0, void, MoleMole_LCSelectPickup_AddInteeBtnByID, (void* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x048AD1C0, 0x0491FD40, bool, MoleMole_LCSelectPickup_IsInPosition, (void* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x048AC920, 0x0491F490, bool, MoleMole_LCSelectPickup_IsOutPosition, (void* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x02A26370, 0x02A25270, void, MoleMole_ItemModule_PickItem, (MoleMole_ItemModule* __this, uint32_t entityID, MethodInfo* method));
DO_APP_FUNC(0x0376EC00, 0x0379EBC0, void, MoleMole_LevelSceneElementViewPlugin_Tick, (LevelSceneElementViewPlugin* __this, float inDeltaTime, MethodInfo* method));
// Bag item exceeded
DO_APP_FUNC(0x02A20EB0, 0x02A1FC60, void, MoleMole_ItemModule_OnCheckAddItemExceedLimitNotify, (/*MoleMole_ItemModule* */ void* __this, Proto_CheckAddItemExceedLimitNotify* notify, MethodInfo* method));


// Dialog skipping
DO_APP_FUNC(0x02873330, 0x0286B4B0, bool, MoleMole_TalkDialogContext_get_canClick, (TalkDialogContext* __this, MethodInfo* method)); // delete
DO_APP_FUNC(0x02873270, 0x0286B3F0, bool, MoleMole_TalkDialogContext_get_canAutoClick, (TalkDialogContext* __this, MethodInfo* method));
DO_APP_FUNC(0x02871AD0, 0x02869BE0, void, MoleMole_TalkDialogContext_OnDialogSelectItem, (TalkDialogContext* __this, Notify* notify, MethodInfo* method));
DO_APP_FUNC(0x05A1D410, 0x05AD2F40, void, MoleMole_InLevelCutScenePageContext_OnFreeClick, (InLevelCutScenePageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x05A1F380, 0x05AD4F60, void, MoleMole_InLevelCutScenePageContext_UpdateView, (InLevelCutScenePageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x05A1BE50, 0x05AD1910, void, MoleMole_InLevelCutScenePageContext_ClearView, (InLevelCutScenePageContext* __this, MethodInfo* method));

// Skip Cutscene | RyujinZX#6666
DO_APP_FUNC(0x0340FC60, 0x03434AD0, void, CriwareMediaPlayer_Update, (CriwareMediaPlayer* __this, MethodInfo* method));
DO_APP_FUNC(0x0340FA70, 0x034348D0, void, CriwareMediaPlayer_Skip, (CriwareMediaPlayer* __this, MethodInfo* method));


// Protection bypass
DO_APP_FUNC(0x09615A20, 0x097086E0, Byte__Array*, Application_RecordUserData, (int32_t nType, MethodInfo* method));


// Networking
DO_APP_FUNC(0x05EC6390, 0x05F8B3B0, void, Kcp_KcpNative_kcp_packet_destroy, (KcpPacket_1* packet, MethodInfo* method));
DO_APP_FUNC(0x05EC6120, 0x05F8B5C0, KcpPacket_1*, Kcp_KcpNative_kcp_packet_create, (uint8_t* data, int32_t len, MethodInfo* method));
DO_APP_FUNC(0x05EC5E00, 0x05F8B2A0, int32_t, Kcp_KcpNative_kcp_client_send_packet, (void* kcp_client, KcpPacket_1* packet, MethodInfo* method));
DO_APP_FUNC(0x05B67640, 0x05C21FA0, bool, MoleMole_KcpClient_TryDequeueEvent, (void* __this, ClientKcpEvent* evt, MethodInfo* method));
DO_APP_FUNC(0x05D6A0D0, 0x05E2B210, void, MoleMole_Packet_XorEncrypt, (Byte__Array** bytes, int32_t length, MethodInfo* method));


// Lua functions
DO_APP_FUNC(0x05887450, 0x05936D50, Byte__Array*, LuaManager_LoadCustomLuaFile, (LuaManager* __this, String** filePath, bool* recycleBytes, MethodInfo* method));
DO_APP_FUNC(0x0618E790, 0x0625B6D0, void, Lua_xlua_pushasciistring, (void* L, String* str, MethodInfo* method));
DO_APP_FUNC(0x02F1C860, 0x02F2ED60, void, MoleMole_LuaShellManager_DoString, (void* __this, Byte__Array* byteArray, MethodInfo* method));
DO_APP_FUNC(0x08B86EF0, 0x08C6CCE0, void*, LuaEnv_DoString, (void* __this, Byte__Array* chunk, String* chunkName, void* env, MethodInfo* method));
DO_APP_FUNC(0x02F1BC80, 0x02F2E120, void, MoleMole_LuaShellManager_ReportLuaShellResult, (void* __this, String* type, String* value, MethodInfo* method)); // Anticheat info


//Backdoored lua packets
DO_APP_FUNC(0x030E2AC0, 0x030FB280, void, MoleMole_PlayerModule_OnWindSeedClientNotify, (MoleMole_PlayerModule* __this, Proto_WindSeedClientNotify* notify, MethodInfo* method));
DO_APP_FUNC(0x0530B900, 0x053A5CA0, void, MoleMole_PlayerModule_OnReciveLuaShell, (MoleMole_PlayerModule* __this, Proto_PlayerLuaShellNotify* playerLuaShellNotify, MethodInfo* method));


// Debug hooks
//DO_APP_FUNC(0x01D2E820, 0x01D2E820, AttackResult_1*, MoleMole_AttackResult_FillProtoAttackResult, (AttackResult* __this, uint32_t attackerID, uint32_t defenseId, AttackResult_1* protoAttackResult, MethodInfo* method));
//DO_APP_FUNC(0x0478A2A0, 0x0478A2A0, void, MoleMole_LevelSyncCombatPlugin_SendFaceToDir, (void* __this, uint32_t runtimeID, Vector3 forward, MethodInfo* method));
DO_APP_FUNC(0x03898CB0, 0x038CDB20, void, MoleMole_BaseEntity_FireEvent, (BaseEntity* __this, BaseEvent* e, bool immediately, MethodInfo* method));
DO_APP_FUNC(0x050BB850, 0x0514CEE0, bool, MoleMole_ActorAbilityPlugin_OnEvent, (void* __this, BaseEvent* e, MethodInfo* method));


// Kill aura
DO_APP_FUNC(0x03D88090, 0x03DD00F0, void, MoleMole_EvtCrash_Init, (EvtCrash* __this, uint32_t targetID, MethodInfo* method)); // Manual offset
DO_APP_FUNC(0x05418220, 0x054B6320, void, MoleMole_EventManager_FireEvent, (MoleMole_EventManager* __this, BaseEvent* e, bool immediately, MethodInfo* method));
DO_APP_FUNC(0x095D6DB0, 0x096C9840, bool, MoleMole_FixedBoolStack_get_value, (FixedBoolStack* __this, MethodInfo* method));

// 3.2 ResolveCall("e8 ? ? ? ? 48 8b d8 48 85 c0 0f 84 ? ? ? ? 8b 57 ? 45 33 c0");
DO_APP_FUNC(0x06302C90, 0x063D09E0, EvtCrash*, MoleMole_EventHelper_Allocate_103, (MethodInfo* method));
// 3.2 ResolveMov("48 8b 0d ? ? ? ? e8 ? ? ? ? 4c 8b 03 48 8b cb 48 8b f0 49 8b 90 ? ? ? ? 41 ff 90 ? ? ? ? 48 85 c0");
DO_APP_FUNC_METHODINFO(0x0CE29690, 0x0CF1B690, MoleMole_EventHelper_Allocate_103__MethodInfo);

DO_APP_FUNC(0x0479B410, 0x048092F0, void, MoleMole_BaseMoveSyncPlugin_ConvertSyncTaskToMotionInfo, (BaseMoveSyncPlugin* __this, MethodInfo* method));


// Fishing
DO_APP_FUNC(0x04641180, 0x046AA5E0, void, MoleMole_FishingModule_RequestFishCastRod, (void* __this, uint32_t baitId, uint32_t rodId, Vector3 pos, uint32_t rodEntityId, MethodInfo* method));

DO_APP_FUNC(0x0463F650, 0x046A8A40, void, MoleMole_FishingModule_RequestFishBite, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x04640B00, 0x046A9F50, void, MoleMole_FishingModule_OnFishBiteRsp, (void* __this, FishBiteRsp* rsp, MethodInfo* method));

DO_APP_FUNC(0x04641350, 0x046AA7C0, void, MoleMole_FishingModule_RequestFishBattleBegin, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x0463EBB0, 0x046A7F90, void, MoleMole_FishingModule_OnFishBattleBeginRsp, (void* __this, FishBattleBeginRsp* rsp, MethodInfo* method));

DO_APP_FUNC(0x0463FFF0, 0x046A9400, void, MoleMole_FishingModule_RequestFishBattleEnd, (void* __this, FishBattleResult__Enum result, bool isAlwaysBonus, float mxBonusTime, MethodInfo* method));
DO_APP_FUNC(0x0463E1F0, 0x046A7500, void, MoleMole_FishingModule_OnFishBattleEndRsp, (void* __this, FishBattleEndRsp* rsp, MethodInfo* method));

DO_APP_FUNC(0x0463EAC0, 0x046A7EA0, void, MoleMole_FishingModule_OnExitFishingRsp, (void* __this, void* rsp, MethodInfo* method));
DO_APP_FUNC(0x04641A20, 0x046AAEA0, void, MoleMole_FishingModule_onFishChosenNotify, (void* __this, void* notify, MethodInfo* method));


// Visuals
DO_APP_FUNC(0x03C7DDE0, 0x03CC23E0, void, MoleMole_SCameraModuleInitialize_SetWarningLocateRatio, (SCameraModuleInitialize* __this, double deltaTime, CameraShareData* data, MethodInfo* method));
DO_APP_FUNC(0x034011E0, 0x03425C10, void, MoleMole_VCBaseSetDitherValue_set_ManagerDitherAlphaValue, (MoleMole_VCBaseSetDitherValue* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x030D1070, 0x030E93B0, void, MoleMole_PlayerModule_EntityAppear, (MoleMole_PlayerModule* __this, Proto_SceneEntityInfo* entity, VisionType__Enum type, uint32_t infoParam, MethodInfo* method));

// Show Skill CDs
DO_APP_FUNC(0x02BFF5D0, 0x02C050C0, void, MoleMole_LCAvatarCombat_SetSkillIndex, (LCAvatarCombat* __this, LCAvatarCombat_LCAvatarCombat_SkillInfo* skillInfo, int32_t index, int32_t priority, MethodInfo* method));
DO_APP_FUNC(0x02BF9B60, 0x02BFF510, void, MoleMole_LCAvatarCombat_CheckCDTimer, (LCAvatarCombat* __this, LCAvatarCombat_LCAvatarCombat_SkillInfo* info, MethodInfo* method));
DO_APP_FUNC(0x02BFC110, 0x02C01B30, int32_t, MoleMole_LCAvatarCombat_GetSkillMaxChargesCount, (LCAvatarCombat* __this, uint32_t skillID, MethodInfo* method));
DO_APP_FUNC(0x02BFBB50, 0x02C01550, int32_t, MoleMole_LCAvatarCombat_GetSkillCurrentChargesCount, (LCAvatarCombat* __this, uint32_t skillID, MethodInfo* method));
DO_APP_FUNC(0x02C00580, 0x02C060A0, float, MoleMole_LCAvatarCombat_GetCurrentSkillCD, (LCAvatarCombat* __this, uint32_t skillID, MethodInfo* method));

DO_APP_FUNC(0x04574440, 0x045DAB20, void, MonoTeamBtn_Update, (MonoTeamBtn* __this, MethodInfo* method));
DO_APP_FUNC(0x04574AD0, 0x045DB1C0, void, MonoTeamBtn_set_showPCKey, (MonoTeamBtn* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x045746A0, 0x045DAD80, void, MonoTeamBtn_set_PCKey, (MonoTeamBtn* __this, String* value, MethodInfo* method));

// Chest Indicator | RyujinZX#6666
DO_APP_FUNC(0x05036F20, 0x050C6EF0, bool, MoleMole_LCIndicatorPlugin_DoCheck, (LCIndicatorPlugin* __this, MethodInfo* method));
DO_APP_FUNC(0x05036230, 0x050C61D0, void, MoleMole_LCIndicatorPlugin_ShowIcon, (LCIndicatorPlugin* __this, MethodInfo* method));
DO_APP_FUNC(0x05038010, 0x050C8030, void, MoleMole_LCIndicatorPlugin_HideIcon, (LCIndicatorPlugin* __this, MethodInfo* method));

// Auto Cooking | RyujinZX#6666
DO_APP_FUNC(0x030DA070, 0x030F25D0, void, MoleMole_PlayerModule_RequestPlayerCook, (MoleMole_PlayerModule* __this, uint32_t recipeId, uint32_t avatarId, uint32_t qteQuality, uint32_t count, MethodInfo* method));
DO_APP_FUNC(0x030DE280, 0x030F68D0, void, MoleMole_PlayerModule_OnPlayerCookRsp, (MoleMole_PlayerModule* __this, PlayerCookRsp* rsp, MethodInfo* method));
DO_APP_FUNC(0x04F60900, 0x04FED0C0, void, MoleMole_CookingQtePageContext_UpdateProficiency, (CookingQtePageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x04F59490, 0x04FE5AA0, void, MoleMole_CookingQtePageContext_CloseItemGotPanel, (CookingQtePageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x037AC7A0, 0x037DDEF0, uint32_t, MoleMole_Config_CookRecipeExcelConfig_CheckCookFoodMaxNum, (uint32_t UpdateCookRecipeDic, MethodInfo* method));

// Profile Changer | RyujinZX#6666
DO_APP_FUNC(0x03355520, 0x03377520, Button_1*, ProfilePage, (MonoInLevelPlayerProfilePage* __this, MethodInfo* method)); // MonoInLevelPlayerProfilePage_get_logoutButton
DO_APP_FUNC(0x040D52F0, 0x04129AF0, void, ProfileEditPage, (MonoFriendInformationDialog* __this, Sprite* value, MethodInfo* method)); // MonoFriendInformationDialog_set_icon

// Custom Weather | RyujinZX#6666
DO_APP_FUNC(0x050C6DD0, 0x05158680, bool, EnviroSky_ChangeWeather, (void* /*app::EnviroSky*/ __this, String* weatherPath, float transTime, float ratio, MethodInfo* method));
DO_APP_FUNC(0x028FDB20, 0x0345D910, void* /*app::EnviroSky*/, EnviroSky_get_Instance, (MethodInfo* method));


// Free Camera
DO_APP_FUNC(0x09592610, 0x09685330, float, Camera_get_fieldOfView, (Camera* __this, MethodInfo* method));
DO_APP_FUNC(0x09592A90, 0x096857A0, void, Camera_set_fieldOfView, (Camera* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x09591E90, 0x09684B90, void, Camera_CopyFrom, (Camera* __this, Camera* other, MethodInfo* method));

// Game Object, Component, Transform Utility
DO_APP_FUNC(0x0962AD00, 0x0971D9D0, GameObject*, GameObject_Find, (String* name, MethodInfo* method));
DO_APP_FUNC(0x0962AD60, 0x0971D9E0, Component_1*, GameObject_GetComponentByName, (GameObject* __this, String* type, MethodInfo* method));
DO_APP_FUNC(0x0962B1C0, 0x0971DE90, bool, GameObject_get_active, (GameObject* __this, MethodInfo* method));
DO_APP_FUNC(0x0962B280, 0x0971DF50, void, GameObject_set_active, (GameObject* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x0962B090, 0x0971DD60, void, GameObject_SetActive, (GameObject* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x09560EF0, 0x09653DB0, Transform*, Transform_FindChild, (Transform* __this, String* name, MethodInfo* method));
DO_APP_FUNC(0x09560F20, 0x09653DE0, Transform*, Transform_GetChild, (Transform* __this, int32_t index, MethodInfo* method));
DO_APP_FUNC(0x09540CA0, 0x096336A0, Component_1*, Component_1_GetComponent_1, (Component_1* __this, String* type, MethodInfo* method));
DO_APP_FUNC(0x0962ACD0, 0x0971D9A0, GameObject*, GameObject_CreatePrimitive, (PrimitiveType__Enum type, MethodInfo* method));
DO_APP_FUNC(0x0962B260, 0x0971DF30, Transform*, GameObject_get_transform, (GameObject* __this, MethodInfo* method));
DO_APP_FUNC(0x095621F0, 0x096550C0, Quaternion, Transform_get_localRotation, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x09562690, 0x09655550, void, Transform_set_localRotation, (Transform* __this, Quaternion value, MethodInfo* method));
DO_APP_FUNC(0x09562230, 0x09655100, Vector3, Transform_get_localScale, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x09561100, 0x09655560, void, Transform_set_localScale, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x095621B0, 0x09655080, Vector3, Transform_get_localPosition, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x09562680, 0x09653FA0, void, Transform_set_localPosition, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x0962AC60, 0x0971D930, Component_1*, GameObject_AddComponentInternal, (GameObject* __this, String* className, MethodInfo* method));
DO_APP_FUNC(0x0962AC70, 0x0971D940, Component_1*, GameObject_AddComponent, (GameObject* __this, Type* componentType, MethodInfo* method));
DO_APP_FUNC(0x0955D7B0, 0x096504A0, Object_1*, Object_1_Instantiate_2, (Object_1* original, MethodInfo* method));
DO_APP_FUNC(0x09562010, 0x09654EE0, int32_t, Transform_get_childCount, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x09540E50, 0x09633850, GameObject*, Component_1_get_gameObject, (Component_1* __this, MethodInfo* method));
DO_APP_FUNC(0x0955DBC0, 0x096508D0, String*, Object_1_get_name, (Object_1* __this, MethodInfo* method));
DO_APP_FUNC(0x0964F180, 0x09742A60, Material__Array*, Renderer_GetMaterialArray, (Renderer* __this, MethodInfo* method));
DO_APP_FUNC(0x09541DE0, 0x096347E0, void, Material_set_mainTexture, (Material* __this, Texture* value, MethodInfo* method));
DO_APP_FUNC(0x09645360, 0x09738CE0, Vector3, Vector3_Lerp, (Vector3 a, Vector3 b, float t, MethodInfo* method));
DO_APP_FUNC(0x09562040, 0x09654F10, Vector3, Transform_get_eulerAngles, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x09562570, 0x09655440, void, Transform_set_eulerAngles, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x09562370, 0x09655240, Vector3, Transform_get_right, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x09562710, 0x096555F0, void, Transform_set_right, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x09562450, 0x09655320, Vector3, Transform_get_up, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x09562790, 0x09655660, void, Transform_set_up, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x095620A0, 0x09654F70, Vector3, Transform_get_forward, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x095625C0, 0x09655490, void, Transform_set_forward, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x09562400, 0x096552D0, Quaternion, Transform_get_rotation, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x09562780, 0x09653FB0, void, Transform_set_rotation, (Transform* __this, Quaternion value, MethodInfo* method));
DO_APP_FUNC(0x0955D4D0, 0x096501D0, void, Object_1_Destroy_1, (Object_1* obj, MethodInfo* method));
DO_APP_FUNC(0x0955D480, 0x09650180, void, Object_1_DestroyImmediate_1, (Object_1* obj, MethodInfo* method));
DO_APP_FUNC(0x095E2E10, 0x096D5840, float, Mathf_Lerp, (float a, float b, float t, MethodInfo* method));
DO_APP_FUNC(0x095F20C0, 0x096E4A70, float, Input_GetAxis, (String* axisName, MethodInfo* method));


// Utility
DO_APP_FUNC(0x05969930, 0x05A5DD50, String*, Text_get_text, (Text* __this, MethodInfo* method));
DO_APP_FUNC(0x0956A510, 0x0965D000, void, Text_set_text, (Text* __this, String* value, MethodInfo* method));
DO_APP_FUNC(0x09590330, 0x09683000, void, Slider_1_set_minValue, (Slider_1* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x095902B0, 0x09682F80, void, Slider_1_set_maxValue, (Slider_1* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x095903F0, 0x096830C0, void, Slider_1_set_value, (Slider_1* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x095F2E30, 0x096E5530, Rect, Sprite_get_rect, (Sprite* __this, MethodInfo* method));
DO_APP_FUNC(0x09676490, 0x09769EF0, Texture2D*, NativeGallery_LoadImageAtPath, (String* imagePath, int32_t maxSize, bool markTextureNonReadable, bool generateMipmaps, bool linearColorSpace, MethodInfo* method));
DO_APP_FUNC(0x095F2C40, 0x096E5330, Sprite*, Sprite_Create, (Texture2D* texture, Rect rect, Vector2 pivot, float pixelsPerUnit, MethodInfo* method));
DO_APP_FUNC(0x0956A020, 0x0965CB10, void, Text_set_alignment, (Text* __this, TextAnchor__Enum value, MethodInfo* method));
DO_APP_FUNC(0x0956A2C0, 0x0965CDB0, void, Text_set_horizontalOverflow, (Text* __this, HorizontalWrapMode__Enum value, MethodInfo* method));
DO_APP_FUNC(0x0956A5B0, 0x0965D0A0, void, Text_set_verticalOverflow, (Text* __this, VerticalWrapMode__Enum value, MethodInfo* method));
DO_APP_FUNC(0x09569F30, 0x0965CA20, bool, Text_get_resizeTextForBestFit, (Text* __this, MethodInfo* method));
DO_APP_FUNC(0x0956A390, 0x0965CE80, void, Text_set_resizeTextForBestFit, (Text* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x095698F0, 0x0965C450, int32_t, Text_get_fontSize, (Text* __this, MethodInfo* method));
DO_APP_FUNC(0x0956A170, 0x0965CC60, void, Text_set_fontSize, (Text* __this, int32_t value, MethodInfo* method));

DO_APP_FUNC(0x050FD260, 0x0518F510, float, Miscs_CalcCurrentGroundWaterHeight, (float x, float z, MethodInfo* method));
DO_APP_FUNC(0x050FC9A0, 0x0518EC30, float, Miscs_CalcCurrentGroundHeight, (float x, float z, MethodInfo* method));
DO_APP_FUNC(0x050FCAA0, 0x0518ED30, float, Miscs_CalcCurrentGroundHeight_1, (float x, float z, float rayStartHeight, float rayDetectLength, int32_t layer, MethodInfo* method));
DO_APP_FUNC(0x050FCE40, 0x0518F0E0, Vector3, Miscs_CalcCurrentGroundNorm, (Vector3 pos, MethodInfo* method));
DO_APP_FUNC(0x05106730, 0x05198B90, Vector3, Miscs_GenWorldPos, (Vector2 levelMapPos, MethodInfo* method));
DO_APP_FUNC(0x05106290, 0x051986C0, Vector2, Miscs_GenLevelPos_1, (Vector3 worldPos, MethodInfo* method));
DO_APP_FUNC(0x0511A860, 0x051AD0F0, int32_t, Miscs_GetSceneGroundLayerMask, (MethodInfo* method));

DO_APP_FUNC(0x08A7FA30, 0x08B62CE0, Vector3, WorldShiftManager_GetAbsolutePosition, (Vector3 pos, MethodInfo* method));
DO_APP_FUNC(0x08A7FBD0, 0x08B62E80, Vector3, WorldShiftManager_GetRelativePosition, (Vector3 pos, MethodInfo* method));

DO_APP_FUNC(0x02F47880, 0x02F5A7D0, Vector3, ActorUtils_GetAvatarPos, (MethodInfo* method));
DO_APP_FUNC(0x02F50520, 0x02F63760, void, ActorUtils_SetAvatarPos, (Vector3 pos, MethodInfo* method));
DO_APP_FUNC(0x02F56470, 0x02F698C0, void, ActorUtils_SyncAvatarMotion, (int32_t state, MethodInfo* method));

//DO_APP_FUNC(0x04C5B4E0, 0x04C5B4E0, Notify, Notify_CreateNotify_1, (MoleMole_NotifyTypes__Enum type, Object* body, MethodInfo* method));

// should be 'op_Implicit' not 'get_value'
DO_APP_FUNC(0x04052310, 0x040A4DC0, float, MoleMole_SafeFloat_get_Value, (SafeFloat safeFloat, MethodInfo* method));
// should be 'op_Implicit' not 'set_value'
DO_APP_FUNC(0x04052400, 0x040A4EB0, SafeFloat, MoleMole_SafeFloat_set_Value, (float value, MethodInfo* method));

// 3.2 ResolveCall("e8 ? ? ? ? 48 85 c0 0f 84 ? ? ? ? 48 8b b8 ? ? ? ? 48 85 ff 0f 84 ? ? ? ? 48 83 7f");
DO_APP_FUNC(0x06307E00, 0x063D5BE0, LCBaseCombat*, MoleMole_BaseEntity_GetLogicCombatComponent_1, (BaseEntity* __this, MethodInfo* method));
// 3.2 ResolveMov("48 8b 15 ? ? ? ? 48 8b cb e8 ? ? ? ? 48 8b 15 ? ? ? ? 48 8b cf 4c 8b f0");
DO_APP_FUNC_METHODINFO(0x0CDBC938, 0x0CEAE938, MoleMole_BaseEntity_GetLogicCombatComponent_1__MethodInfo);

DO_APP_FUNC(0x0388DF10, 0x038C2970, String*, MoleMole_BaseEntity_ToStringRelease, (BaseEntity* __this, MethodInfo* method));

DO_APP_FUNC(0x04519320, 0x0457E800, void, MoleMole_BaseEntity_SetRelativePosition, (BaseEntity* __this, Vector3 position, bool forceSyncToRigidbody, MethodInfo* method));
DO_APP_FUNC(0x0450E890, 0x04573A90, void, MoleMole_BaseEntity_SetAbsolutePosition, (BaseEntity* __this, Vector3 abpos, bool forceSyncToRigidbody, MethodInfo* method));
DO_APP_FUNC(0x04508C30, 0x0456DCE0, Rigidbody*, MoleMole_BaseEntity_GetRigidbody, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x04509AD0, 0x0456EBB0, Vector3, MoleMole_BaseEntity_GetAbsolutePosition, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x04504C80, 0x04569CA0, Vector3, MoleMole_BaseEntity_GetRelativePosition, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x0451AC30, 0x04580170, Vector3, MoleMole_BaseEntity_GetForward, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x0450F520, 0x04574750, Vector3, MoleMole_BaseEntity_GetForwardFast, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x04504AC0, 0x04569AE0, Vector3, MoleMole_BaseEntity_GetRight, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x0451B810, 0x04580D70, Vector3, MoleMole_BaseEntity_GetUp, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x0388A5B0, 0x038BEED0, bool, MoleMole_BaseEntity_IsActive, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x043B6BD0, 0x0456B800, Animator*, MoleMole_BaseEntity_get_animator, (BaseEntity* __this, MethodInfo* method));

// type should be 'MoleMole_VCCharacterCombat' not 'MoleMole_VCBaseMove'
// function name should be 'GetVisualCombatComponent_3' not 'GetMoveComponent_1'
// 3.2 ResolveCall("e8 ? ? ? ? 48 85 c0 74 ? 4c 8b 00 48 8b c8 f3 0f 10 56");
DO_APP_FUNC(0x06307DD0, 0x063D5BB0, VCBaseMove*, MoleMole_BaseEntity_GetMoveComponent_1, (BaseEntity* __this, MethodInfo* method));
// 3.2 ResolveMov("48 8b 15 ? ? ? ? 48 8b cf 48 89 5c 24 ? e8 ? ? ? ? 48 85 c0 74 ? 48 8b c8 e8 ? ? ? ? 48 8b c8 48 8b d8 e8 ? ? ? ? 84 c0 48 0f 44 f3 48 8b ce e8 ? ? ? ? 84 c0 75 ? 48 8b 07 48 8b d6 48 8b cf 4c 8b 80 ? ? ? ? ff 90 ? ? ? ? 48 8b c8 33 d2 48 8b d8 e8 ? ? ? ? 84 c0 74 ? 48 85 db");
DO_APP_FUNC_METHODINFO(0x0CDD54D0, 0x0CEC74D0, MoleMole_BaseEntity_GetMoveComponent_1__MethodInfo);


DO_APP_FUNC(0x03898780, 0x038CD5E0, List_1_MoleMole_BaseComponent_*, MoleMole_BaseEntity_GetAllLogicComponents, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x0450E120, 0x05711360, GameObject*, MoleMole_BaseEntity_get_rootGameObject, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x043B6E50, 0x05B95110, GameObject*, MoleMole_BaseEntity_get_gameObject, (BaseEntity* __this, MethodInfo* method));


// type should be 'MoleMole_AvatarEntity' not 'MoleMole_BaseEntity'
DO_APP_FUNC(0x02B570E0, 0x02B5A770, BaseEntity*, MoleMole_EntityManager_GetLocalAvatarEntity, (MoleMole_EntityManager* __this, MethodInfo* method));
DO_APP_FUNC(0x02B56560, 0x02B59B90, CameraEntity*, MoleMole_EntityManager_GetMainCameraEntity, (MoleMole_EntityManager* __this, MethodInfo* method));
DO_APP_FUNC(0x02B577B0, 0x02B5AE50, BaseEntity*, MoleMole_EntityManager_GetValidEntity, (MoleMole_EntityManager* __this, uint32_t runtimeID, MethodInfo* method));
DO_APP_FUNC(0x02B535F0, 0x02B56B60, bool, MoleMole_EntityManager_RemoveEntity, (MoleMole_EntityManager* __this, BaseEntity* entity, uint32_t specifiedRuntimeID, MethodInfo* method));
DO_APP_FUNC(0x02B58540, 0x02B5BC20, bool, MoleMole_EntityManager_IsCachedEntity, (MoleMole_EntityManager* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x02B4CCD0, 0x02B50040, List_1_MoleMole_BaseEntity_*, MoleMole_EntityManager_GetEntities, (MoleMole_EntityManager* __this, MethodInfo* method));
DO_APP_FUNC(0x073E1760, 0x074BE6F0, Bounds, Utils_4_GetBounds, (GameObject* go, MethodInfo* method));

// Modify | RyujinZX#6666
DO_APP_FUNC(0x0308E790, 0x030A5AA0, void, MoleMole_HumanoidMoveFSM_LateTick, (HumanoidMoveFSM* __this, float deltaTime, MethodInfo* method));

DO_APP_FUNC(0x053A9DA0, 0x05446A60, bool, MoleMole_ScenePropManager_GetTreeTypeByPattern, (MoleMole_ScenePropManager* __this, String* pattern, MoleMole_Config_TreeType__Enum* treeType, MethodInfo* method));
DO_APP_FUNC(0x04534E50, 0x0459AAE0, void, MoleMole_NetworkManager_RequestHitTreeDropNotify, (MoleMole_NetworkManager* __this, Vector3 position, Vector3 hitPostion, MoleMole_Config_TreeType__Enum treeType, MethodInfo* method));
DO_APP_FUNC(0x03654EC0, 0x03680910, uint64_t, MoleMole_TimeUtil_get_LocalNowMsTimeStamp, (MethodInfo* method));

DO_APP_FUNC(0x02A8F350, 0x02A8F6A0, bool, MoleMole_LoadingManager_IsLoaded, (MoleMole_LoadingManager* __this, MethodInfo* method));

// Thanks to | RyujinZX
DO_APP_FUNC(0x0433E370, 0x0439C760, void, MoleMole_LCAbilityElement_ReduceModifierDurability, (LCAbilityElement* __this, int32_t modifierDurabilityIndex, float reduceDurability, Nullable_1_Single_ deltaTime, MethodInfo* method));

DO_APP_FUNC(0x032ED390, 0x0330DDA0, BaseEntity*, MoleMole_GadgetEntity_GetOwnerEntity, (GadgetEntity* __this, MethodInfo* method));

DO_APP_FUNC(0x02DC3570, 0x02DD0730, bool, MoleMole_UIManager_HasEnableMapCamera, (MoleMole_UIManager* __this, MethodInfo* method));
DO_APP_FUNC(0x02DD5470, 0x02DE2A00, void, MoleMole_UIManager_EnableInput, (MoleMole_UIManager* __this, bool playerInput, bool clearCurInputState, bool ignoreTouch, MethodInfo* method));

DO_APP_FUNC(0x02E61F00, 0x02E71320, void, MonoMiniMap_Update, (MonoMiniMap* __this, MethodInfo* method));
DO_APP_FUNC(0x03B66130, 0x0506E4B0, MonoMiniMap*, MonoInLevelMainPage_get_miniMap, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x033C4C20, 0x033E8790, void, MoleMole_GadgetModule_OnGadgetInteractRsp, (void* __this, GadgetInteractRsp* notify, MethodInfo* method));
DO_APP_FUNC(0x029D0E10, 0x029CE950, float, MoleMole_InLevelMainPageContext_get_miniMapScale, (InLevelMainPageContext* __this, MethodInfo* method));


// UnityEngine
DO_APP_FUNC(0x095ECAD0, 0x096DF650, void, RenderSettings_set_fog, (bool value, MethodInfo* method));
DO_APP_FUNC(0x09616080, 0x09708DC0, int32_t, Application_get_targetFrameRate, (MethodInfo* method));
DO_APP_FUNC(0x09616460, 0x09709200, void, Application_set_targetFrameRate, (int32_t value, MethodInfo* method));
DO_APP_FUNC(0x09615FB0, 0x09708CF0, bool, Application_get_IsFocused, (MethodInfo* method));

DO_APP_FUNC(0x0966FBD0, 0x09763490, bool, RectTransformUtility_ScreenPointToLocalPointInRectangle, (void* rect, Vector2 screenPoint, void* cam, Vector2* localPoint, MethodInfo* method));

DO_APP_FUNC(0x09562330, 0x09655200, Vector3, Transform_get_position, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x09561110, 0x096555E0, void, Transform_set_position, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x09644F20, 0x09738890, float, Vector3_Distance, (Vector3 a, Vector3 b, MethodInfo* method));
DO_APP_FUNC(0x09547020, 0x09639B60, float, Vector2_Distance, (Vector2 a, Vector2 b, MethodInfo* method));

DO_APP_FUNC(0x09580180, 0x09672C10, bool, Cursor_get_visible, (MethodInfo* method));
DO_APP_FUNC(0x095801A0, 0x09672C30, void, Cursor_set_visible, (bool value, MethodInfo* method));
DO_APP_FUNC(0x09580190, 0x09672C20, void, Cursor_set_lockState, (CursorLockMode__Enum value, MethodInfo* method));

DO_APP_FUNC(0x094CA260, 0x095BCEB0, RigidbodyConstraints__Enum, Rigidbody_get_constraints, (Rigidbody* __this, MethodInfo* method));
DO_APP_FUNC(0x094CA430, 0x095BD090, void, Rigidbody_set_constraints, (Rigidbody* __this, RigidbodyConstraints__Enum value, MethodInfo* method));
DO_APP_FUNC(0x094CA420, 0x095BD080, void, Rigidbody_set_collisionDetectionMode, (Rigidbody* __this, CollisionDetectionMode__Enum value, MethodInfo* method));
DO_APP_FUNC(0x094CA440, 0x095BD0A0, void, Rigidbody_set_detectCollisions, (Rigidbody* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x094CA490, 0x095BD0F0, void, Rigidbody_set_isKinematic, (Rigidbody* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x094CA390, 0x095BCFE0, Vector3, Rigidbody_get_velocity, (Rigidbody* __this, MethodInfo* method));
DO_APP_FUNC(0x094CA1C0, 0x095BD160, void, Rigidbody_set_velocity, (Rigidbody* __this, Vector3 value, MethodInfo* method));

DO_APP_FUNC(0x0962CBB0, 0x0971F900, float, Time_get_timeScale, (MethodInfo* method));
DO_APP_FUNC(0x0962CC60, 0x0971F9B0, void, Time_set_timeScale, (float value, MethodInfo* method));
DO_APP_FUNC(0x0962CAD0, 0x0971F820, float, Time_get_deltaTime, (MethodInfo* method));

DO_APP_FUNC(0x09592300, 0x09685020, Vector3, Camera_WorldToScreenPoint, (Camera* __this, Vector3 position, MethodInfo* method));
DO_APP_FUNC(0x09592640, 0x09685360, Camera*, Camera_get_main, (MethodInfo* method));
DO_APP_FUNC(0x09592780, 0x096854A0, int32_t, Camera_get_pixelWidth, (Camera* __this, MethodInfo* method));
DO_APP_FUNC(0x09592730, 0x09685450, int32_t, Camera_get_pixelHeight, (Camera* __this, MethodInfo* method));

DO_APP_FUNC(0x09545DF0, 0x096388A0, int32_t, Screen_get_width, (MethodInfo* method));
DO_APP_FUNC(0x09545D80, 0x09638830, int32_t, Screen_get_height, (MethodInfo* method));

DO_APP_FUNC(0x07EA4B70, 0x07F85F40, void, EmoSync_SetEmotion, (EmoSync* __this, String* emotionName, float blendTime, MethodInfo* method));
DO_APP_FUNC(0x07EA4FD0, 0x07F863A0, void, EmoSync_SetPhoneme, (EmoSync* __this, String* phonemeName, float blendTime, MethodInfo* method));
DO_APP_FUNC(0x07EA47A0, 0x07F85B50, void, EmoSync_ResetPhoneme, (EmoSync* __this, bool playPost, MethodInfo* method));
DO_APP_FUNC(0x07EA4660, 0x07F85A10, void, EmoSync_ResetEmotion, (EmoSync* __this, bool playPost, MethodInfo* method));
DO_APP_FUNC(0x07EA3800, 0x07F84B70, void, EmoSync_EmoFinish, (EmoSync* __this, MethodInfo* method));
DO_APP_FUNC(0x07EA4020, 0x07F853C0, void, EmoSync_PhoFinish, (EmoSync* __this, MethodInfo* method));

DO_APP_FUNC(0x095D1170, 0x096C3BB0, void, Animator_Play, (Animator* __this, String* stateName, int32_t layer, float normalizedTime, MethodInfo* method));
DO_APP_FUNC(0x095D12F0, 0x096C3D30, void, Animator_Rebind, (Animator* __this, MethodInfo* method));
DO_APP_FUNC(0x095D1850, 0x096C4270, float, Animator_get_speed, (Animator* __this, MethodInfo* method));
DO_APP_FUNC(0x095D1980, 0x096C43A0, void, Animator_set_speed, (Animator* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x095D1680, 0x096C40A0, Avatar*, Animator_get_avatar, (Animator* __this, MethodInfo* method));
DO_APP_FUNC(0x07F797C0, 0x0805C6E0, String*, Extension_GetCurrentStateName, (Animator* animator, int32_t layer, AnimatorController* animCont, MethodInfo* method));

DO_APP_FUNC(0x09643BB0, 0x097374E0, bool, Behaviour_get_isActiveAndEnabled, (Behaviour* __this, MethodInfo* method));

DO_APP_FUNC(0x0962C120, 0x0971EE50, Vector3, Quaternion_ToEulerAngles, (Quaternion rotation, MethodInfo* method));
DO_APP_FUNC(0x0276F3D0, 0x02766960, Vector3, Quaternion_get_eulerAngles, (Quaternion__Boxed* __this, MethodInfo* method));
DO_APP_FUNC(0x0955F950, 0x096527D0, Rect, RectTransform_get_rect, (RectTransform* __this, MethodInfo* method));
DO_APP_FUNC(0x0966F090, 0x09762930, float, Canvas_get_scaleFactor, (/*Canvas**/void* __this, MethodInfo* method));

DO_APP_FUNC(0x072B1BE0, 0x038722D0, void, Action_Invoke, (/*Action*/ void* __this, MethodInfo* method));

DO_APP_FUNC(0x03B61DC0, 0x03BA1DA0, void, LevelTimeManager_SetInternalTimeOfDay, (/*LevelTimeManager**/void* __this, float inHours, bool force, bool refreshEnviroTime, MethodInfo* method));

DO_APP_FUNC(0x05128C40, 0x051BB890, void, Miscs_SetUILocalAvatarVisible, (bool visible, MethodInfo* method));

// Open team immediately
// F3 0F 10 83 ?? ?? ?? ?? 0F 29 74 24 30 F3 0F 10 B3 ?? ?? ?? ?? 
// f3 0f 10 83 ? ? ? ? 0f 29 74 24 ? f3 0f 10 b3 ? ? ? ? 0f 2f c6 76 ? e8 ? ? ? ? 48 8b 8b ? ? ? ? f3 0f 58 c6 f3 0f 11 83 ? ? ? ? 48 85 c9
DO_APP_FUNC(0x02BE61A0, 0x02BEB3E0, bool, MoleMole_InLevelMainPageContext_DoTeamCountDown_c_Iterator0__MoveNext, (InLevelMainPageContext_DoTeamCountDown_Iterator* __this, MethodInfo* method));
// 48 89 6c 24 ? 56 48 83 ec ? 48 8b 05 ? ? ? ? 33 ed 89 6c 24 ? 48 8b f1 48 8b 90
// 48 8b 8e ? ? ? ? 40 88 ae
DO_APP_FUNC(0x04F9A2A0, 0x050278E0, void, MoleMole_InLevelPlayerProfilePageContext_SetupView, (/*MoleMole_InLevelPlayerProfilePageContext*/void* __this, MethodInfo* method));
DO_APP_FUNC(0x04F937F0, 0x05020CA0, void, MoleMole_InLevelPlayerProfilePageContext_ClearView, (/*MoleMole_InLevelPlayerProfilePageContext*/void* __this, MethodInfo* method));

// Skip enhance animation
DO_APP_FUNC(0x02DE9770, 0x02DF72F0, void, MoleMole_EquipLevelUpDialogContext_SetupView, (MoleMole_EquipLevelUpDialogContext* __this, MethodInfo* method));
DO_APP_FUNC(0x02DE90D0, 0x02DF6C40, void, MoleMole_EquipLevelUpDialogContext_ShowReturnedMaterialAndCloseDialog, (/*MoleMole_EquipLevelUpDialogContext*/ void* __this, MethodInfo* method));
DO_APP_FUNC(0x05D4EC80, 0x05E0F8B0, void, MoleMole_EquipOverviewPageContext_PlayExpAddAnimation, (/*MoleMole_EquipOverviewPageContext*/ void* __this, float startPer, float endPer, /*Action*/ void* callback, MethodInfo* method));
DO_APP_FUNC(0x05D44620, 0x05E05070, void, MoleMole_EquipOverviewPageContext_PlayLevelUpSuccessShow, (/*MoleMole_EquipOverviewPageContext*/ void* __this, /*Action*/ void* refreshViewAction, MethodInfo* method));

// Singletons
DO_APP_FUNC(0x020A1910, 0x020ADA60, void*, Singleton_GetInstance, (MethodInfo* method));
DO_APP_FUNC_METHODINFO(0x0CDBA9B0, 0x0CEAC9B0, Singleton_1_MoleMole_UIManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0CDBB018, 0x0CEAD018, Singleton_1_MoleMole_PlayerModule__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0CDBADC0, 0x0CEACDC0, Singleton_1_MoleMole_EntityManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0CDC18D8, 0x0CEB38D8, Singleton_1_MoleMole_ItemModule__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0CDBF3D8, 0x0CEB13D8, Singleton_1_MoleMole_NetworkManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0CDBABC0, 0x0CEACBC0, Singleton_1_MoleMole_EventManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0CDBB2E8, 0x0CEAD2E8, Singleton_1_InteractionManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0CDBE0C0, 0x0CEB00C0, Singleton_1_MoleMole_ScenePropManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0CDBFD08, 0x0CEB1D08, Singleton_1_MoleMole_LoadingManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0CDBB308, 0x0CEAD308, Singleton_1_MoleMole_MapModule__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0CDBE9F0, 0x0CEB09F0, Singleton_1_MoleMole_MapManager__get_Instance__MethodInfo);

//Model Changer
//Regex of AvatarExcelConfig for !RELOADED Dump
//\DO_APP_FUNC\(0x\w + , void, \w + __ctor, \(\w + \ * __this, MethodInfo \* method\)\);
//DO_APP_FUNC\(0x\w + , Dictionary_2_System_UInt32_\w + \*, \w + , \(MethodInfo \* method\)\);
//DO_APP_FUNC\(0x\w + , \w + \*, \w + , \(uint32_t \w + , MethodInfo \* method\)\);
//DO_APP_FUNC\(0x\w + , String \*, \w + , \(MethodInfo \* method\)\);
//Then choose the first match
//DO_APP_FUNC(0x096804B0, 0x00000000, void, MiHoYoLodLoader_ResumeLodLoader, (MiHoYoLodLoader* __this, MethodInfo* method));
//DO_APP_FUNC(0x096804E0, 0x00000000, bool, MiHoYoLodLoader_TryApplySpecificLodLevelImmdiate, (MiHoYoLodLoader* __this, bool gcmesh, MethodInfo* method));
//DO_APP_FUNC(0x09680470, 0x00000000, void, MiHoYoLodLoader_PauseLODManager, (MethodInfo* method));
//DO_APP_FUNC(0x096804F0, 0x00000000, int32_t, MiHoYoLodLoader_get_currentLodLevel, (MiHoYoLodLoader* __this, MethodInfo* method));
//DO_APP_FUNC(0x09680490, 0x00000000, void, MiHoYoLodLoader_PauseLodLoaderWithSpecificLodLevel, (MiHoYoLodLoader* __this, int32_t pausedLodLevel, MethodInfo* method));
//DO_APP_FUNC(0x09680480, 0x00000000, void, MiHoYoLodLoader_PauseLodLoaderWithHighestLodLevel, (MiHoYoLodLoader* __this, MethodInfo* method));
//DO_APP_FUNC(0x095D2FB0, 0x00000000, void, Animator_set_cullingMode, (Animator* __this, AnimatorCullingMode__Enum value, MethodInfo* method));
//DO_APP_FUNC(0x09646C10, 0x00000000, bool, Behaviour_get_enabled, (Behaviour* __this, MethodInfo* method));
//DO_APP_FUNC(0x09646C30, 0x00000000, void, Behaviour_set_enabled, (Behaviour* __this, bool value, MethodInfo* method));
//DO_APP_FUNC(0x095D2ED0, 0x00000000, RuntimeAnimatorController*, Animator_get_runtimeAnimatorController, (Animator* __this, MethodInfo* method));
//DO_APP_FUNC(0x095D3000, 0x00000000, void, Animator_set_runtimeAnimatorController, (Animator* __this, RuntimeAnimatorController* value, MethodInfo* method));
//DO_APP_FUNC(0x09568D00, 0x00000000, Transform*, Transform_get_parent, (Transform* __this, MethodInfo* method));
//DO_APP_FUNC(0x09569090, 0x00000000, void, Transform_set_parent, (Transform* __this, Transform* value, MethodInfo* method));
//DO_APP_FUNC(0x09568D00, 0x00000000, Transform*, Transform_get_parentInternal, (Transform* __this, MethodInfo* method));
//DO_APP_FUNC(0x09569080, 0x00000000, void, Transform_set_parentInternal, (Transform* __this, Transform* value, MethodInfo* method));
//DO_APP_FUNC(0x09568450, 0x00000000, void, Transform_SetSiblingIndex, (Transform* __this, int32_t index, MethodInfo* method));
//DO_APP_FUNC(0x094B4BE0, 0x00000000, float, CapsuleCollider_get_height, (CapsuleCollider* __this, MethodInfo* method));
//DO_APP_FUNC(0x095D2E30, 0x00000000, bool, Animator_get_isAnimationPaused, (Animator* __this, MethodInfo* method));
//DO_APP_FUNC(0x095D2FD0, 0x00000000, void, Animator_set_isAnimationPaused, (Animator* __this, bool value, MethodInfo* method));
//DO_APP_FUNC(0x0962C220, 0x00000000, Component_1__Array*, GameObject_GetComponentsInChildren, (GameObject* __this, Type* type, MethodInfo* method));
//DO_APP_FUNC(0x08F5D350, 0x00000000, Type*, Object_GetType, (Object* __this, MethodInfo* method));
//DO_APP_FUNC(0x08F124C0, 0x00000000, Type*, Type_GetType_2, (String* typeName, MethodInfo* method));
//DO_APP_FUNC(0x08F14230, 0x00000000, Type*, Type_internal_from_name, (String* name, bool throwOnError, bool ignoreCase, MethodInfo* method));
//DO_APP_FUNC(0x08F51AD0, 0x00000000, Assembly*, Assembly_LoadWithPartialName, (String* partialName, Evidence* securityEvidence, MethodInfo* method));
//DO_APP_FUNC(0x08F51710, 0x00000000, Type*, Assembly_GetType, (Assembly* __this, String* name, bool throwOnError, MethodInfo* method));
//DO_APP_FUNC(0x0962CF90, 0x00000000, Quaternion, Quaternion_Euler, (float x, float y, float z, MethodInfo* method));