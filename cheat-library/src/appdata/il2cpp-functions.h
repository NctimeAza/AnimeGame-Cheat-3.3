// Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// Target Unity version: 2017.4.15 - 2017.4.40

// ******************************************************************************
// * IL2CPP application-specific method definition addresses and signatures
// ******************************************************************************
using namespace app;

// Map hooks
DO_APP_FUNC(0x05E057D0, 0x05E092A0, void, MoleMole_InLevelMapPageContext_OnMarkClicked, (InLevelMapPageContext* __this, MonoMapMark* mark, MethodInfo* method));
DO_APP_FUNC(0x05E1A710, 0x05E1E190, void, MoleMole_InLevelMapPageContext_OnMapClicked, (InLevelMapPageContext* __this, Vector2 screenPos, MethodInfo* method));
DO_APP_FUNC(0x05E29BA0, 0x05E2D6D0, void, MoleMole_InLevelMapPageContext_ZoomMap, (InLevelMapPageContext* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x05E2C4C0, 0x05E30000, void, MoleMole_InLevelMapPageContext_UpdateView, (InLevelMapPageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x0406AF70, 0x04070520, bool, MoleMole_MapModule_IsAreaUnlock, (MoleMole_MapModule* __this, uint32_t sceneID, uint32_t areaID, MethodInfo* method));


// should be 'op_Implicit' not 'get_value'
DO_APP_FUNC(0x0431B9D0, 0x04320790, uint16_t, MoleMole_SimpleSafeUInt16_get_Value, (SimpleSafeUInt16 v, MethodInfo* method));
DO_APP_FUNC(0x03F128A0, 0x03F17650, uint32_t, MoleMole_SimpleSafeUInt32_get_Value, (SimpleSafeUInt32 v, MethodInfo* method));
DO_APP_FUNC(0x08882280, 0x08885010, String*, Marshal_PtrToStringAnsi, (void* ptr, MethodInfo* method));
DO_APP_FUNC(0x08882310, 0x088850A0, String*, Marshal_PtrToStringUni, (void* ptr, MethodInfo* method));

// Map utility
DO_APP_FUNC(0x02E803A0, 0x02E84C90, Rect, MonoInLevelMapPage_get_mapRect, (MonoInLevelMapPage* __this, MethodInfo* method));
DO_APP_FUNC(0x02E80380, 0x02E84C70, Transform*, MonoInLevelMapPage_get_mapBackground, (MonoInLevelMapPage* __this, MethodInfo* method));


// Teleport hooks
DO_APP_FUNC(0x052590C0, 0x0525D3B0, void, GameManager_Update, (GameManager* __this, MethodInfo* method));
DO_APP_FUNC(0x02FCF800, 0x02FD3DD0, void, MoleMole_LoadingManager_SceneGoto, (MoleMole_LoadingManager* __this, PlayerEnterSceneNotify* notify, MethodInfo* method));
DO_APP_FUNC(0x02FD0CC0, 0x02FD52A0, void, MoleMole_LoadingManager_PerformPlayerTransmit, (MoleMole_LoadingManager* __this, Vector3 targetPos, EnterType__Enum enterType, uint32_t token, EvtTransmitAvatar_EvtTransmitAvatar_TransmitType__Enum transType, uint32_t enterReason, MethodInfo* method));
DO_APP_FUNC(0x02FD2170, 0x02FD6760, void, MoleMole_LoadingManager_RequestSceneTransToPoint, (MoleMole_LoadingManager* __this, uint32_t sceneId, uint32_t pointId, void* finishCallBackInForceDrag, MethodInfo* method));
DO_APP_FUNC(0x02FD1DD0, 0x02FD63B0, bool, MoleMole_LoadingManager_NeedTransByServer, (MoleMole_LoadingManager* __this, uint32_t sceneId, Vector3 position, MethodInfo* method));
//DO_APP_FUNC(0x0341E6C0, 0x0, Vector3, MoleMole_LocalEntityInfoData_get_initPos, (LocalEntityInfoData* __this, MethodInfo* method)); // shared offset


// Unlimited stamina
DO_APP_FUNC(0x04A324D0, 0x04A38790, void, MoleMole_LevelSyncCombatPlugin_RequestSceneEntityMoveReq, (LevelSyncCombatPlugin* __this, uint32_t entityId, MotionInfo* syncInfo, bool isReliable, uint32_t HAOCOEMOMBG, MethodInfo* method));
DO_APP_FUNC(0x03AF3140, 0x03AF7810, void, MoleMole_DataItem_HandleNormalProp, (DataItem* __this, uint32_t type, int64_t value, DataPropOp__Enum state, MethodInfo* method));
// Wanderer E Stamina
DO_APP_FUNC(0x02FEF8A0, 0x02FF3F20, void, VCHumanoidMove_MNKKEGMDFFO, (VCHumanoidMove* __this, float JJJEOEHLNGP, MethodInfo* method));

// God mode
DO_APP_FUNC(0x02FE8820, 0x02FECE90, void, VCHumanoidMove_NotifyLandVelocity, (VCHumanoidMove* __this, Vector3 velocity, float reachMaxDownVelocityTime, MethodInfo* method));
DO_APP_FUNC(0x04C830A0, 0x04C89480, bool, Miscs_CheckTargetAttackable, (BaseEntity* attackerEntity, BaseEntity* targetEntity, MethodInfo* method));
DO_APP_FUNC(0x052F4100, 0x052F8650, void, MoleMole_LCBaseCombat_FireBeingHitEvent, (LCBaseCombat* __this, uint32_t attackeeRuntimeID, AttackResult* attackResult, MethodInfo* method));
DO_APP_FUNC(0x056E1210, 0x056E5A00, bool, MoleMole_ActorAbilityPlugin_HanlderModifierThinkTimerUp, (ActorAbilityPlugin* __this, float delay, Object* arg, MethodInfo* method));


// Cooldown cheats
DO_APP_FUNC(0x058AD670, 0x058B1D30, bool, MoleMole_HumanoidMoveFSM_CheckSprintCooldown, (/* HumanoidMoveFSM */void* __this, MethodInfo* method));
DO_APP_FUNC(0x0570AB90, 0x0570F430, bool, MoleMole_LCAvatarCombat_IsEnergyMax, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x0570EBC0, 0x05713440, void, MoleMole_LCAvatarCombat_ChangeEnergy_1, (LCAvatarCombat* __this, ElementType__Enum type, float value, DataPropOp__Enum state, MethodInfo* method));
DO_APP_FUNC(0x05709D90, 0x0570E610, bool, MoleMole_LCAvatarCombat_OnSkillStart, (LCAvatarCombat* __this, uint32_t skillID, float cdMultipler, MethodInfo* method));
DO_APP_FUNC(0x05707A40, 0x0570C2D0, bool, MoleMole_LCAvatarCombat_IsSkillInCD_1, (LCAvatarCombat* __this, LCAvatarCombat_LCAvatarCombat_SkillInfo* skillInfo, MethodInfo* method));
DO_APP_FUNC(0x056B8090, 0x056BC840, void, MoleMole_ActorAbilityPlugin_AddDynamicFloatWithRange, (MoleMole_ActorAbilityPlugin* __this, String* key, float value, float min, float max, bool forceDoAtRemote, MethodInfo* method));

// Rapid fire
DO_APP_FUNC(0x052E7B60, 0x052EC060, void, MoleMole_LCBaseCombat_DoHitEntity, (LCBaseCombat* __this, uint32_t targetID, AttackResult* attackResult, bool ignoreCheckCanBeHitInMP, MethodInfo* method));
DO_APP_FUNC(0x048FAB60, 0x04900E10, void, MoleMole_Formula_CalcAttackResult, (CombatProperty* attackCombatProperty, CombatProperty* defenseCombatProperty, AttackResult* attackResult, BaseEntity* attackerEntity, BaseEntity* attackeeEntity, MethodInfo* method));
DO_APP_FUNC(0x051BDDB0, 0x051C4750, void, MoleMole_VCAnimatorEvent_HandleProcessItem, (MoleMole_VCAnimatorEvent* __this, MoleMole_VCAnimatorEvent_MoleMole_VCAnimatorEvent_AnimatorEventPatternProcessItem* processItem, AnimatorStateInfo processStateInfo, MoleMole_VCAnimatorEvent_MoleMole_VCAnimatorEvent_TriggerMode__Enum mode, MethodInfo* method));


// World cheats
DO_APP_FUNC(0x0393E2F0, 0x03942C40, void, MoleMole_VCMonsterAIController_TryDoSkill, (/* VCMonsterAIController */ void* __this, uint32_t skillID, MethodInfo* method)); // Manual
DO_APP_FUNC(0x03F0FFC0, 0x03F14C40, void, MoleMole_LCSelectPickup_AddInteeBtnByID, (void* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x03F10710, 0x03F15390, bool, MoleMole_LCSelectPickup_IsInPosition, (void* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x03F10950, 0x03F155D0, bool, MoleMole_LCSelectPickup_IsOutPosition, (void* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x04838530, 0x0483E740, void, MoleMole_ItemModule_PickItem, (MoleMole_ItemModule* __this, uint32_t entityID, MethodInfo* method));
DO_APP_FUNC(0x044372D0, 0x0443C240, void, MoleMole_LevelSceneElementViewPlugin_Tick, (LevelSceneElementViewPlugin* __this, float inDeltaTime, MethodInfo* method));
// Bag item exceeded
DO_APP_FUNC(0x0483A870, 0x04840A80, void, MoleMole_ItemModule_OnCheckAddItemExceedLimitNotify, (/*MoleMole_ItemModule* */ void* __this, Proto_CheckAddItemExceedLimitNotify* notify, MethodInfo* method));


// Dialog skipping
//DO_APP_FUNC(0x02873330, 0x0, bool, MoleMole_TalkDialogContext_get_canClick, (TalkDialogContext* __this, MethodInfo* method)); // delete
DO_APP_FUNC(0x03E2D220, 0x03E323A0, bool, MoleMole_TalkDialogContext_get_canAutoClick, (TalkDialogContext* __this, MethodInfo* method));
DO_APP_FUNC(0x03E2BA70, 0x03E30BF0, void, MoleMole_TalkDialogContext_OnDialogSelectItem, (TalkDialogContext* __this, Notify* notify, MethodInfo* method));
DO_APP_FUNC(0x033DE380, 0x033E30D0, void, MoleMole_InLevelCutScenePageContext_OnFreeClick, (InLevelCutScenePageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x033E1370, 0x033E60D0, void, MoleMole_InLevelCutScenePageContext_UpdateView, (InLevelCutScenePageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x033DE610, 0x033E3360, void, MoleMole_InLevelCutScenePageContext_ClearView, (InLevelCutScenePageContext* __this, MethodInfo* method));

// Skip Cutscene | RyujinZX#6666
DO_APP_FUNC(0x05BDA240, 0x05BDE260, void, CriwareMediaPlayer_Update, (CriwareMediaPlayer* __this, MethodInfo* method));
DO_APP_FUNC(0x05BDA0F0, 0x05BDE110, void, CriwareMediaPlayer_Skip, (CriwareMediaPlayer* __this, MethodInfo* method));


// Protection bypass
DO_APP_FUNC(0x090BD710, 0x090BEBC0, Byte__Array*, Application_RecordUserData, (int32_t nType, MethodInfo* method));


// Networking
DO_APP_FUNC(0x04222930, 0x042280A0, void, Kcp_KcpNative_kcp_packet_destroy, (KcpPacket_1* packet, MethodInfo* method));
DO_APP_FUNC(0x04222E10, 0x04228580, KcpPacket_1*, Kcp_KcpNative_kcp_packet_create, (uint8_t* data, int32_t len, MethodInfo* method));
DO_APP_FUNC(0x04222A60, 0x042281D0, int32_t, Kcp_KcpNative_kcp_client_send_packet, (void* kcp_client, KcpPacket_1* packet, MethodInfo* method));
DO_APP_FUNC(0x02BAC3D0, 0x02BAFFF0, bool, MoleMole_KcpClient_TryDequeueEvent, (void* __this, ClientKcpEvent* evt, MethodInfo* method));
DO_APP_FUNC(0x04235CE0, 0x0423B270, void, MoleMole_Packet_XorEncrypt, (Byte__Array** bytes, int32_t length, MethodInfo* method));


// Lua functions
DO_APP_FUNC(0x0414E1B0, 0x04153A80, Byte__Array*, LuaManager_LoadCustomLuaFile, (LuaManager* __this, String** filePath, bool* recycleBytes, MethodInfo* method));
DO_APP_FUNC(0x090065A0, 0x09007B10, void, Lua_xlua_pushasciistring, (void* L, String* str, MethodInfo* method));
DO_APP_FUNC(0x086DD150, 0x086DF310, void*, LuaEnv_DoString, (void* __this, Byte__Array* chunk, String* chunkName, void* env, MethodInfo* method));
DO_APP_FUNC(0x058EF2D0, 0x058F40C0, void, MoleMole_LuaShellManager_DoString, (void* __this, Byte__Array* byteArray, MethodInfo* method));
DO_APP_FUNC(0x058EFB00, 0x058F48F0, void, MoleMole_LuaShellManager_ReportLuaShellResult, (void* __this, String* type, String* value, MethodInfo* method)); // Anticheat info


//Backdoored lua packets
DO_APP_FUNC(0x045B5880, 0x045BB270, void, MoleMole_PlayerModule_OnWindSeedClientNotify, (MoleMole_PlayerModule* __this, Proto_WindSeedClientNotify* notify, MethodInfo* method));
DO_APP_FUNC(0x02DB3A00, 0x02DB84E0, void, MoleMole_PlayerModule_OnReciveLuaShell, (MoleMole_PlayerModule* __this, Proto_PlayerLuaShellNotify* playerLuaShellNotify, MethodInfo* method));


// Debug hooks
//DO_APP_FUNC(0x01D2E820, 0x0, AttackResult_1*, MoleMole_AttackResult_FillProtoAttackResult, (AttackResult* __this, uint32_t attackerID, uint32_t defenseId, AttackResult_1* protoAttackResult, MethodInfo* method));
//DO_APP_FUNC(0x0478A2A0, 0x0, void, MoleMole_LevelSyncCombatPlugin_SendFaceToDir, (void* __this, uint32_t runtimeID, Vector3 forward, MethodInfo* method));
//DO_APP_FUNC(0x03898CB0, 0x0, void, MoleMole_BaseEntity_FireEvent, (BaseEntity* __this, BaseEvent* e, bool immediately, MethodInfo* method));
DO_APP_FUNC(0x056DDCA0, 0x056E2490, bool, MoleMole_ActorAbilityPlugin_OnEvent, (void* __this, BaseEvent* e, MethodInfo* method));


// Kill aura
DO_APP_FUNC(0x05165180, 0x0516BB10, void, MoleMole_EvtCrash_Init, (EvtCrash* __this, uint32_t targetID, MethodInfo* method)); // Manual offset
DO_APP_FUNC(0x046A6C60, 0x046AC1B0, void, MoleMole_EventManager_FireEvent, (MoleMole_EventManager* __this, BaseEvent* e, bool immediately, MethodInfo* method));
DO_APP_FUNC(0x08E37EA0, 0x09062C80, bool, MoleMole_FixedBoolStack_get_value, (FixedBoolStack* __this, MethodInfo* method));

// 3.3 ResolveCall("e8 ? ? ? ? 48 8b f8 48 85 c0 74 ? 8b d6 48 8b c8 e8 ? ? ? ? 45 33 c0");
DO_APP_FUNC(0x0522D990, 0x05231F00, EvtCrash*, MoleMole_EventHelper_Allocate_103, (MethodInfo* method));
// 3.3 ResolveMov("f3 0f 59 c9 0f 2f f9 0f 82 ? ? ? ? 48 8b 05"//goto 1st JE);
DO_APP_FUNC_METHODINFO(0x0C7DBBB8, 0x0C7DEBB8, MoleMole_EventHelper_Allocate_103__MethodInfo);

DO_APP_FUNC(0x033ADF30, 0x033B2B80, void, MoleMole_BaseMoveSyncPlugin_ConvertSyncTaskToMotionInfo, (BaseMoveSyncPlugin* __this, MethodInfo* method));


// Fishing
DO_APP_FUNC(0x0319D4A0, 0x031A1A00, void, MoleMole_FishingModule_RequestFishCastRod, (void* __this, uint32_t baitId, uint32_t rodId, Vector3 pos, uint32_t rodEntityId, MethodInfo* method));

DO_APP_FUNC(0x0319CD60, 0x031A12B0, void, MoleMole_FishingModule_RequestFishBite, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x0319B0C0, 0x0319F610, void, MoleMole_FishingModule_OnFishBiteRsp, (void* __this, FishBiteRsp* rsp, MethodInfo* method));

DO_APP_FUNC(0x0319EEA0, 0x031A3400, void, MoleMole_FishingModule_RequestFishBattleBegin, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x0319D2A0, 0x031A1800, void, MoleMole_FishingModule_OnFishBattleBeginRsp, (void* __this, FishBattleBeginRsp* rsp, MethodInfo* method));

DO_APP_FUNC(0x0319CC40, 0x031A1190, void, MoleMole_FishingModule_RequestFishBattleEnd, (void* __this, FishBattleResult__Enum result, bool isAlwaysBonus, float mxBonusTime, MethodInfo* method));
DO_APP_FUNC(0x0319C0E0, 0x031A0630, void, MoleMole_FishingModule_OnFishBattleEndRsp, (void* __this, FishBattleEndRsp* rsp, MethodInfo* method));

DO_APP_FUNC(0x0319D010, 0x031A1560, void, MoleMole_FishingModule_OnExitFishingRsp, (void* __this, void* rsp, MethodInfo* method));
DO_APP_FUNC(0x0319ED30, 0x031A3290, void, MoleMole_FishingModule_onFishChosenNotify, (void* __this, void* notify, MethodInfo* method));


// Visuals
DO_APP_FUNC(0x02FBD6D0, 0x02FC1C00, void, MoleMole_SCameraModuleInitialize_SetWarningLocateRatio, (SCameraModuleInitialize* __this, double deltaTime, CameraShareData* data, MethodInfo* method));
DO_APP_FUNC(0x054614D0, 0x05465DA0, void, MoleMole_VCBaseSetDitherValue_set_ManagerDitherAlphaValue, (MoleMole_VCBaseSetDitherValue* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x02DC2B90, 0x02DC7700, void, MoleMole_PlayerModule_EntityAppear, (MoleMole_PlayerModule* __this, Proto_SceneEntityInfo* entity, VisionType__Enum type, uint32_t infoParam, MethodInfo* method));

// Show Skill CDs
DO_APP_FUNC(0x0570F7A0, 0x05714020, void, MoleMole_LCAvatarCombat_SetSkillIndex, (LCAvatarCombat* __this, LCAvatarCombat_LCAvatarCombat_SkillInfo* skillInfo, int32_t index, int32_t priority, MethodInfo* method));
DO_APP_FUNC(0x0570CB00, 0x05711390, void, MoleMole_LCAvatarCombat_CheckCDTimer, (LCAvatarCombat* __this, LCAvatarCombat_LCAvatarCombat_SkillInfo* info, MethodInfo* method));
DO_APP_FUNC(0x05708B10, 0x0570D3A0, int32_t, MoleMole_LCAvatarCombat_GetSkillMaxChargesCount, (LCAvatarCombat* __this, uint32_t skillID, MethodInfo* method));
DO_APP_FUNC(0x0570A2E0, 0x0570EB70, int32_t, MoleMole_LCAvatarCombat_GetSkillCurrentChargesCount, (LCAvatarCombat* __this, uint32_t skillID, MethodInfo* method));

DO_APP_FUNC(0x0383BFB0, 0x03840F60, void, MonoTeamBtn_SetupView, (MonoTeamBtn* __this, uint64_t guid, MethodInfo* method));
DO_APP_FUNC(0x0383CE20, 0x03841DE0, void, MonoTeamBtn_set_PCKey, (MonoTeamBtn* __this, String* value, MethodInfo* method));
DO_APP_FUNC(0x0383CD50, 0x03841D10, /*MonoControlElement*/ void*, MonoTeamBtn_get_PS4KeyIcon, (MonoTeamBtn* __this, MethodInfo* method));
DO_APP_FUNC(0x03334170, 0x03338EC0, bool, MoleMole_UIManager_IsPS4Layout, (MethodInfo* method));

// Chest Indicator | RyujinZX#6666
DO_APP_FUNC(0x03E53150, 0x03E582D0, bool, MoleMole_LCIndicatorPlugin_DoCheck, (LCIndicatorPlugin* __this, MethodInfo* method));
DO_APP_FUNC(0x03E53AC0, 0x03E58C40, void, MoleMole_LCIndicatorPlugin_ShowIcon, (LCIndicatorPlugin* __this, MethodInfo* method));
DO_APP_FUNC(0x03E54710, 0x03E59890, void, MoleMole_LCIndicatorPlugin_HideIcon, (LCIndicatorPlugin* __this, MethodInfo* method));

// Auto Cooking | RyujinZX#6666
DO_APP_FUNC(0x045B2000, 0x045B79E0, void, MoleMole_PlayerModule_RequestPlayerCook, (MoleMole_PlayerModule* __this, uint32_t recipeId, uint32_t avatarId, uint32_t qteQuality, uint32_t count, MethodInfo* method));
DO_APP_FUNC(0x045B7D60, 0x045BD750, void, MoleMole_PlayerModule_OnPlayerCookRsp, (MoleMole_PlayerModule* __this, PlayerCookRsp* rsp, MethodInfo* method));
DO_APP_FUNC(0x039C68E0, 0x039CB380, void, MoleMole_CookingQtePageContext_UpdateProficiency, (CookingQtePageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x039C67D0, 0x039CB270, void, MoleMole_CookingQtePageContext_CloseItemGotPanel, (CookingQtePageContext* __this, MethodInfo* method));
DO_APP_FUNC(0x04E72B30, 0x04E78610, uint32_t, MoleMole_Config_CookRecipeExcelConfig_CheckCookFoodMaxNum, (uint32_t UpdateCookRecipeDic, MethodInfo* method));

// Profile Changer | RyujinZX#6666
DO_APP_FUNC(0x02F9CCE0, 0x02FA11C0, Button_1*, ProfilePage, (MonoInLevelPlayerProfilePage* __this, MethodInfo* method)); // MonoInLevelPlayerProfilePage_get_logoutButton
DO_APP_FUNC(0x039685D0, 0x0396CFE0, void, ProfileEditPage, (MonoFriendInformationDialog* __this, Sprite* value, MethodInfo* method)); // MonoFriendInformationDialog_set_icon

// Custom Weather | RyujinZX#6666
DO_APP_FUNC(0x05BF2190, 0x05BF6180, bool, EnviroSky_ChangeWeather, (void* /*app::EnviroSky*/ __this, String* weatherPath, float transTime, float ratio, MethodInfo* method));
DO_APP_FUNC(0x05C1B4B0, 0x05C1F490, void* /*app::EnviroSky*/, EnviroSky_get_Instance, (MethodInfo* method));


// Free Camera
DO_APP_FUNC(0x090301D0, 0x09031770, float, Camera_get_fieldOfView, (Camera* __this, MethodInfo* method));
DO_APP_FUNC(0x09030660, 0x09031C10, void, Camera_set_fieldOfView, (Camera* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x0902F9B0, 0x09030F50, void, Camera_CopyFrom, (Camera* __this, Camera* other, MethodInfo* method));

// Game Object, Component, Transform Utility
DO_APP_FUNC(0x090D4260, 0x090D57A0, GameObject*, GameObject_Find, (String* name, MethodInfo* method));
DO_APP_FUNC(0x090D4270, 0x090D57B0, Component_1*, GameObject_GetComponentByName, (GameObject* __this, String* type, MethodInfo* method));
DO_APP_FUNC(0x090D4730, 0x090D5C70, bool, GameObject_get_active, (GameObject* __this, MethodInfo* method));
DO_APP_FUNC(0x090D4800, 0x090D5D40, void, GameObject_set_active, (GameObject* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x090D4600, 0x090D5B40, void, GameObject_SetActive, (GameObject* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x08FFC950, 0x08FFDDE0, Transform*, Transform_FindChild, (Transform* __this, String* name, MethodInfo* method));
DO_APP_FUNC(0x08FFC980, 0x08FFDE10, Transform*, Transform_GetChild, (Transform* __this, int32_t index, MethodInfo* method));
DO_APP_FUNC(0x08FD8060, 0x08FD91F0, Component_1*, Component_1_GetComponent_1, (Component_1* __this, String* type, MethodInfo* method));
DO_APP_FUNC(0x090D4230, 0x090D5770, GameObject*, GameObject_CreatePrimitive, (PrimitiveType__Enum type, MethodInfo* method));
DO_APP_FUNC(0x090D47E0, 0x090D5D20, Transform*, GameObject_get_transform, (GameObject* __this, MethodInfo* method));
DO_APP_FUNC(0x08FFDC70, 0x08FFF100, Quaternion, Transform_get_localRotation, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x08FFCB40, 0x08FFF5A0, void, Transform_set_localRotation, (Transform* __this, Quaternion value, MethodInfo* method));
DO_APP_FUNC(0x08FFDCB0, 0x08FFF140, Vector3, Transform_get_localScale, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x08FFE100, 0x08FFDFE0, void, Transform_set_localScale, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x08FFDC30, 0x08FFF0C0, Vector3, Transform_get_localPosition, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x08FFCB30, 0x08FFF590, void, Transform_set_localPosition, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x090D41D0, 0x090D5710, Component_1*, GameObject_AddComponentInternal, (GameObject* __this, String* className, MethodInfo* method));
DO_APP_FUNC(0x090D4520, 0x090D5A60, Component_1*, GameObject_AddComponent, (GameObject* __this, Type* componentType, MethodInfo* method));
DO_APP_FUNC(0x08FF8F40, 0x08FFA440, Object_1*, Object_1_Instantiate_2, (Object_1* original, MethodInfo* method));
DO_APP_FUNC(0x08FFDA90, 0x08FFEF20, int32_t, Transform_get_childCount, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x08FD8210, 0x08FD93A0, GameObject*, Component_1_get_gameObject, (Component_1* __this, MethodInfo* method));
DO_APP_FUNC(0x08FF9360, 0x08FFA830, String*, Object_1_get_name, (Object_1* __this, MethodInfo* method));
DO_APP_FUNC(0x090F97A0, 0x090FA7F0, Material__Array*, Renderer_GetMaterialArray, (Renderer* __this, MethodInfo* method));
DO_APP_FUNC(0x08FD91D0, 0x08FDA330, void, Material_set_mainTexture, (Material* __this, Texture* value, MethodInfo* method));
DO_APP_FUNC(0x090EF5A0, 0x090F0310, Vector3, Vector3_Lerp, (Vector3 a, Vector3 b, float t, MethodInfo* method));
DO_APP_FUNC(0x08FFDAC0, 0x08FFEF50, Vector3, Transform_get_eulerAngles, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x08FFDFF0, 0x08FFF480, void, Transform_set_eulerAngles, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x08FFDDF0, 0x08FFF280, Vector3, Transform_get_right, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x08FFE180, 0x08FFF620, void, Transform_set_right, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x08FFDED0, 0x08FFF360, Vector3, Transform_get_up, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x08FFE200, 0x08FFF690, void, Transform_set_up, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x08FFDB20, 0x08FFEFB0, Vector3, Transform_get_forward, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x08FFE040, 0x08FFF4D0, void, Transform_set_forward, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x08FFDE80, 0x08FFF310, Quaternion, Transform_get_rotation, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x08FFE1F0, 0x08FFE000, void, Transform_set_rotation, (Transform* __this, Quaternion value, MethodInfo* method));
DO_APP_FUNC(0x08FF8C70, 0x08FFA140, void, Object_1_Destroy_1, (Object_1* obj, MethodInfo* method));
DO_APP_FUNC(0x08FF8C20, 0x08FFA0F0, void, Object_1_DestroyImmediate_1, (Object_1* obj, MethodInfo* method));
DO_APP_FUNC(0x0908A640, 0x0908C2C0, float, Mathf_Lerp, (float a, float b, float t, MethodInfo* method));
DO_APP_FUNC(0x090999D0, 0x0909B400, float, Input_GetAxis, (String* axisName, MethodInfo* method));


// Utility
DO_APP_FUNC(0x03580990, 0x0417BC00, String*, Text_get_text, (Text* __this, MethodInfo* method));
DO_APP_FUNC(0x0900F7B0, 0x09010CA0, void, Text_set_text, (Text* __this, String* value, MethodInfo* method));
DO_APP_FUNC(0x09038FB0, 0x0903A570, void, Slider_1_set_minValue, (Slider_1* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x09038F30, 0x0903A4F0, void, Slider_1_set_maxValue, (Slider_1* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x09039070, 0x090399F0, void, Slider_1_set_value, (Slider_1* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x0909A570, 0x0909BD00, Sprite*, Sprite_Create, (Texture2D* texture, Rect rect, Vector2 pivot, float pixelsPerUnit, MethodInfo* method));
DO_APP_FUNC(0x0909A770, 0x0909BF00, Rect, Sprite_get_rect, (Sprite* __this, MethodInfo* method));
DO_APP_FUNC(0x0911F560, 0x09120020, Texture2D*, NativeGallery_LoadImageAtPath, (String* imagePath, int32_t maxSize, bool markTextureNonReadable, bool generateMipmaps, bool linearColorSpace, MethodInfo* method));
DO_APP_FUNC(0x0900F2C0, 0x090107B0, void, Text_set_alignment, (Text* __this, TextAnchor__Enum value, MethodInfo* method));
DO_APP_FUNC(0x0900F560, 0x09010A50, void, Text_set_horizontalOverflow, (Text* __this, HorizontalWrapMode__Enum value, MethodInfo* method));
DO_APP_FUNC(0x0900F850, 0x09010D40, void, Text_set_verticalOverflow, (Text* __this, VerticalWrapMode__Enum value, MethodInfo* method));
DO_APP_FUNC(0x0900F1D0, 0x090106C0, bool, Text_get_resizeTextForBestFit, (Text* __this, MethodInfo* method));
DO_APP_FUNC(0x0900F630, 0x09010B20, void, Text_set_resizeTextForBestFit, (Text* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x0900EB80, 0x09010070, int32_t, Text_get_fontSize, (Text* __this, MethodInfo* method));
DO_APP_FUNC(0x0900F410, 0x09010900, void, Text_set_fontSize, (Text* __this, int32_t value, MethodInfo* method));

DO_APP_FUNC(0x04C800D0, 0x04C864A0, float, Miscs_CalcCurrentGroundWaterHeight, (float x, float z, MethodInfo* method));
DO_APP_FUNC(0x04C7F970, 0x04C85D40, float, Miscs_CalcCurrentGroundHeight, (float x, float z, MethodInfo* method));
DO_APP_FUNC(0x04C7FA20, 0x04C85DF0, float, Miscs_CalcCurrentGroundHeight_1, (float x, float z, float rayStartHeight, float rayDetectLength, int32_t layer, MethodInfo* method));
DO_APP_FUNC(0x04C7FCF0, 0x04C860C0, Vector3, Miscs_CalcCurrentGroundNorm, (Vector3 pos, MethodInfo* method));
DO_APP_FUNC(0x04C882D0, 0x04C8E6C0, Vector3, Miscs_GenWorldPos, (Vector2 levelMapPos, MethodInfo* method));
DO_APP_FUNC(0x04C87F70, 0x04C8E360, Vector2, Miscs_GenLevelPos_1, (Vector3 worldPos, MethodInfo* method));
DO_APP_FUNC(0x04C9B820, 0x04CA16B0, int32_t, Miscs_GetSceneGroundLayerMask, (MethodInfo* method));

DO_APP_FUNC(0x0861DE80, 0x086204B0, Vector3, WorldShiftManager_GetAbsolutePosition, (Vector3 pos, MethodInfo* method));
DO_APP_FUNC(0x0861E010, 0x08620640, Vector3, WorldShiftManager_GetRelativePosition, (Vector3 pos, MethodInfo* method));

DO_APP_FUNC(0x046D4610, 0x046D9AF0, Vector3, ActorUtils_GetAvatarPos, (MethodInfo* method));
DO_APP_FUNC(0x046DB1D0, 0x046E0710, void, ActorUtils_SetAvatarPos, (Vector3 pos, MethodInfo* method));
DO_APP_FUNC(0x046DFA80, 0x046E5030, void, ActorUtils_SyncAvatarMotion, (int32_t state, MethodInfo* method));

//DO_APP_FUNC(0x04C5B4E0, 0x0, Notify, Notify_CreateNotify_1, (MoleMole_NotifyTypes__Enum type, Object* body, MethodInfo* method));

// should be 'op_Implicit' not 'get_value'
DO_APP_FUNC(0x041FDC80, 0x04203540, float, MoleMole_SafeFloat_get_Value, (SafeFloat safeFloat, MethodInfo* method));
// should be 'op_Implicit' not 'set_value'
DO_APP_FUNC(0x041FDD10, 0x042035D0, SafeFloat, MoleMole_SafeFloat_set_Value, (float value, MethodInfo* method));

// 3.3 ResolveCall("e8 ? ? ? ? 48 8b c8 48 85 c0 75 ? 48 8b 0d ? ? ? ? e8 ? ? ? ? 48 8b d8");
DO_APP_FUNC(0x0522D740, 0x05231C90, LCBaseCombat*, MoleMole_BaseEntity_GetLogicCombatComponent_1, (BaseEntity* __this, MethodInfo* method));
// 3.3 ResolveMov("48 8b 15 ? ? ? ? 48 8b cb e8 ? ? ? ? 48 8b 15 ? ? ? ? 48 8b cf 4c 8b f0");
DO_APP_FUNC_METHODINFO(0x0C7722D8, 0x0C7752D8, MoleMole_BaseEntity_GetLogicCombatComponent_1__MethodInfo);

DO_APP_FUNC(0x05756700, 0x0575AF70, String*, MoleMole_BaseEntity_ToStringRelease, (BaseEntity* __this, MethodInfo* method));

DO_APP_FUNC(0x03606850, 0x0360B910, void, MoleMole_BaseEntity_SetRelativePosition, (BaseEntity* __this, Vector3 position, bool forceSyncToRigidbody, MethodInfo* method));
DO_APP_FUNC(0x03608790, 0x0360D850, void, MoleMole_BaseEntity_SetAbsolutePosition, (BaseEntity* __this, Vector3 abpos, bool forceSyncToRigidbody, MethodInfo* method));
DO_APP_FUNC(0x035FDEB0, 0x03602F80, Rigidbody*, MoleMole_BaseEntity_GetRigidbody, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x035F77D0, 0x035FC8A0, Vector3, MoleMole_BaseEntity_GetAbsolutePosition, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x03607AD0, 0x0360CB90, Vector3, MoleMole_BaseEntity_GetRelativePosition, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x0360CAE0, 0x03611BA0, Vector3, MoleMole_BaseEntity_GetForward, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x035F7720, 0x035FC7F0, Vector3, MoleMole_BaseEntity_GetForwardFast, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x035F7A70, 0x035FCB30, Vector3, MoleMole_BaseEntity_GetRight, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x036050A0, 0x0360A160, Vector3, MoleMole_BaseEntity_GetUp, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x0575EEF0, 0x05763770, bool, MoleMole_BaseEntity_IsActive, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x0360BF20, 0x03610FE0, Animator*, MoleMole_BaseEntity_get_animator, (BaseEntity* __this, MethodInfo* method));

// type should be 'MoleMole_VCCharacterCombat' not 'MoleMole_VCBaseMove'
// function name should be 'GetVisualCombatComponent_3' not 'GetMoveComponent_1'
// 3.3 ResolveCall("e8 ? ? ? ? 48 85 c0 74 ? 4c 8b 00 48 8b c8 f3 0f 10 56");
DO_APP_FUNC(0x0522D770, 0x05231CC0, VCBaseMove*, MoleMole_BaseEntity_GetMoveComponent_1, (BaseEntity* __this, MethodInfo* method));
// 3.3 ResolveMov("48 8b 15 ? ? ? ? 48 8b ce 48 89 5c 24 ? e8 ? ? ? ? 48 85 c0");
DO_APP_FUNC_METHODINFO(0x0C77D4B0, 0x0C7804B0, MoleMole_BaseEntity_GetMoveComponent_1__MethodInfo);


DO_APP_FUNC(0x05753E40, 0x057586B0, List_1_MoleMole_BaseComponent_*, MoleMole_BaseEntity_GetAllLogicComponents, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x04204F50, 0x0420A6D0, GameObject*, MoleMole_BaseEntity_get_rootGameObject, (BaseEntity* __this, MethodInfo* method));
DO_APP_FUNC(0x03CD47C0, 0x03611AB0, GameObject*, MoleMole_BaseEntity_get_gameObject, (BaseEntity* __this, MethodInfo* method));


// type should be 'MoleMole_AvatarEntity' not 'MoleMole_BaseEntity'
DO_APP_FUNC(0x03473990, 0x03478B60, BaseEntity*, MoleMole_EntityManager_GetLocalAvatarEntity, (MoleMole_EntityManager* __this, MethodInfo* method));
DO_APP_FUNC(0x034793F0, 0x0347E5C0, CameraEntity*, MoleMole_EntityManager_GetMainCameraEntity, (MoleMole_EntityManager* __this, MethodInfo* method));
DO_APP_FUNC(0x03477B20, 0x0347CCF0, BaseEntity*, MoleMole_EntityManager_GetValidEntity, (MoleMole_EntityManager* __this, uint32_t runtimeID, MethodInfo* method));
DO_APP_FUNC(0x03471160, 0x03476330, bool, MoleMole_EntityManager_RemoveEntity, (MoleMole_EntityManager* __this, BaseEntity* entity, uint32_t specifiedRuntimeID, MethodInfo* method));
DO_APP_FUNC(0x0346C810, 0x034719E0, bool, MoleMole_EntityManager_IsCachedEntity, (MoleMole_EntityManager* __this, BaseEntity* entity, MethodInfo* method));
DO_APP_FUNC(0x0346FBA0, 0x03474D70, List_1_MoleMole_BaseEntity_*, MoleMole_EntityManager_GetEntities, (MoleMole_EntityManager* __this, MethodInfo* method));
DO_APP_FUNC(0x069745F0, 0x06977DF0, Bounds, Utils_4_GetBounds, (GameObject* go, MethodInfo* method));

// Modify | RyujinZX#6666
DO_APP_FUNC(0x058AE8B0, 0x058B2F70, void, MoleMole_HumanoidMoveFSM_LateTick, (HumanoidMoveFSM* __this, float deltaTime, MethodInfo* method));

DO_APP_FUNC(0x0420C2D0, 0x04211A60, bool, MoleMole_ScenePropManager_GetTreeTypeByPattern, (MoleMole_ScenePropManager* __this, String* pattern, MoleMole_Config_TreeType__Enum* treeType, MethodInfo* method));
DO_APP_FUNC(0x045D5D00, 0x045DB380, void, MoleMole_NetworkManager_RequestHitTreeDropNotify, (MoleMole_NetworkManager* __this, Vector3 position, Vector3 hitPostion, MoleMole_Config_TreeType__Enum treeType, MethodInfo* method));
DO_APP_FUNC(0x05FD5DC0, 0x05FD95D0, uint64_t, MoleMole_TimeUtil_get_LocalNowMsTimeStamp, (MethodInfo* method));

DO_APP_FUNC(0x02FCC220, 0x02FD07E0, bool, MoleMole_LoadingManager_IsLoaded, (MoleMole_LoadingManager* __this, MethodInfo* method));

// Thanks to | RyujinZX
DO_APP_FUNC(0x047CF9D0, 0x047D5400, void, MoleMole_LCAbilityElement_ReduceModifierDurability, (LCAbilityElement* __this, int32_t modifierDurabilityIndex, float reduceDurability, Nullable_1_Single_ deltaTime, MethodInfo* method));

DO_APP_FUNC(0x057878A0, 0x0578C1C0, BaseEntity*, MoleMole_GadgetEntity_GetOwnerEntity, (GadgetEntity* __this, MethodInfo* method));

DO_APP_FUNC(0x0333A2D0, 0x0333F060, bool, MoleMole_UIManager_HasEnableMapCamera, (MoleMole_UIManager* __this, MethodInfo* method));
DO_APP_FUNC(0x0333DD00, 0x03342A90, void, MoleMole_UIManager_EnableInput, (MoleMole_UIManager* __this, bool playerInput, bool clearCurInputState, bool ignoreTouch, MethodInfo* method));
DO_APP_FUNC(0x0333AA60, 0x0333F7F0, void, MoleMole_UIManager_TryShowNormalMessage, (MoleMole_UIManager* __this, String* content, Color bgColor, bool showBackground, MethodInfo* method));
DO_APP_FUNC(0x0333EF50, 0x03343CF0, void, MoleMole_UIManager_TryShowInfoMessageWithoutBlockInput, (MoleMole_UIManager* __this, String* content, bool discardIfDuplicated, UIShowPriority__Enum priority, MethodInfo* method));
DO_APP_FUNC(0x042A9F10, 0x042AF460, /*MoleMole_GeneralDialogContext*/void*, MoleMole_UIUtil_TryShowGeneralDialog, (String* title, String* desc, /*Action_1_Boolean_*/void* callback, UIType__Enum uiType, /*MoleMole_WaitForGeneralDialog*/void* yieldIns, GeneralDialogContext_GeneralDialogType__Enum dialogType, UIShowPriority__Enum mode, bool showNormalCloseBtn, bool isToggleDialog, bool MCJCBLMKDKC, MethodInfo* method));
DO_APP_FUNC(0x0429C210, 0x042A1720, /*MoleMole_GeneralDialogContext*/void*, MoleMole_UIUtil_TryShowSimpleGeneralDialog_1, (String* title, String* content, /*Action*/void* buttonCallback, MethodInfo* method));
DO_APP_FUNC(0x090BDDE0, 0x090BF280, SystemLanguage__Enum, Application_get_systemLanguage, (MethodInfo* method));

DO_APP_FUNC(0x02E87430, 0x02E8BD20, void, MonoMiniMap_Update, (MonoMiniMap* __this, MethodInfo* method));
DO_APP_FUNC(0x06673430, 0x030B38D0, MonoMiniMap*, MonoInLevelMainPage_get_miniMap, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x05AFC440, 0x05B00250, void, MoleMole_GadgetModule_OnGadgetInteractRsp, (void* __this, GadgetInteractRsp* notify, MethodInfo* method));
DO_APP_FUNC(0x02DDD9D0, 0x02DE2590, float, MoleMole_InLevelMainPageContext_get_miniMapScale, (InLevelMainPageContext* __this, MethodInfo* method));


// UnityEngine
DO_APP_FUNC(0x090943B0, 0x09096090, void, RenderSettings_set_fog, (bool value, MethodInfo* method));
DO_APP_FUNC(0x090BDDF0, 0x090BF290, int32_t, Application_get_targetFrameRate, (MethodInfo* method));
DO_APP_FUNC(0x090BE230, 0x090BF6E0, void, Application_set_targetFrameRate, (int32_t value, MethodInfo* method));
DO_APP_FUNC(0x090BDD20, 0x090BF1C0, bool, Application_get_IsFocused, (MethodInfo* method));

DO_APP_FUNC(0x0911A710, 0x0911B060, bool, RectTransformUtility_ScreenPointToLocalPointInRectangle, (void* rect, Vector2 screenPoint, void* cam, Vector2* localPoint, MethodInfo* method));

DO_APP_FUNC(0x08FFDDB0, 0x08FFF240, Vector3, Transform_get_position, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x08FFCB50, 0x08FFDFF0, void, Transform_set_position, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x090EF170, 0x090EFEE0, float, Vector3_Distance, (Vector3 a, Vector3 b, MethodInfo* method));
DO_APP_FUNC(0x08FDE5C0, 0x08FDF700, float, Vector2_Distance, (Vector2 a, Vector2 b, MethodInfo* method));

DO_APP_FUNC(0x0901EC10, 0x09020110, bool, Cursor_get_visible, (MethodInfo* method));
DO_APP_FUNC(0x0901EC30, 0x09020130, void, Cursor_set_visible, (bool value, MethodInfo* method));
DO_APP_FUNC(0x0901EC20, 0x09020120, void, Cursor_set_lockState, (CursorLockMode__Enum value, MethodInfo* method));

DO_APP_FUNC(0x08F5D220, 0x08F5EB90, RigidbodyConstraints__Enum, Rigidbody_get_constraints, (Rigidbody* __this, MethodInfo* method));
DO_APP_FUNC(0x08F5D3F0, 0x08F5ED60, void, Rigidbody_set_constraints, (Rigidbody* __this, RigidbodyConstraints__Enum value, MethodInfo* method));
DO_APP_FUNC(0x08F5D3E0, 0x08F5ED50, void, Rigidbody_set_collisionDetectionMode, (Rigidbody* __this, CollisionDetectionMode__Enum value, MethodInfo* method));
DO_APP_FUNC(0x08F5D400, 0x08F5ED70, void, Rigidbody_set_detectCollisions, (Rigidbody* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x08F5D440, 0x08F5EDC0, void, Rigidbody_set_isKinematic, (Rigidbody* __this, bool value, MethodInfo* method));
DO_APP_FUNC(0x08F5D350, 0x08F5ECC0, Vector3, Rigidbody_get_velocity, (Rigidbody* __this, MethodInfo* method));
DO_APP_FUNC(0x08F5D4B0, 0x08F5EAD0, void, Rigidbody_set_velocity, (Rigidbody* __this, Vector3 value, MethodInfo* method));

DO_APP_FUNC(0x090D64D0, 0x090D7510, float, Time_get_timeScale, (MethodInfo* method));
DO_APP_FUNC(0x090D6580, 0x090D75C0, void, Time_set_timeScale, (float value, MethodInfo* method));
DO_APP_FUNC(0x090D63F0, 0x090D7430, float, Time_get_deltaTime, (MethodInfo* method));

DO_APP_FUNC(0x0902FEC0, 0x09031460, Vector3, Camera_WorldToScreenPoint, (Camera* __this, Vector3 position, MethodInfo* method));
DO_APP_FUNC(0x09030200, 0x090317A0, Camera*, Camera_get_main, (MethodInfo* method));
DO_APP_FUNC(0x09030340, 0x090318E0, int32_t, Camera_get_pixelWidth, (Camera* __this, MethodInfo* method));
DO_APP_FUNC(0x090302F0, 0x09031890, int32_t, Camera_get_pixelHeight, (Camera* __this, MethodInfo* method));

DO_APP_FUNC(0x08FDD300, 0x08FDE440, int32_t, Screen_get_width, (MethodInfo* method));
DO_APP_FUNC(0x08FDD290, 0x08FDE3D0, int32_t, Screen_get_height, (MethodInfo* method));

DO_APP_FUNC(0x07EF96F0, 0x07EFD720, void, EmoSync_ResetEmotion, (EmoSync* __this, bool playPost, MethodInfo* method));
DO_APP_FUNC(0x07EF9BB0, 0x07EFDBE0, void, EmoSync_SetEmotion, (EmoSync* __this, String* emotionName, float blendTime, MethodInfo* method));
DO_APP_FUNC(0x07EF9820, 0x07EFD850, void, EmoSync_ResetPhoneme, (EmoSync* __this, bool playPost, MethodInfo* method));
DO_APP_FUNC(0x07EF9FF0, 0x07EFE020, void, EmoSync_SetPhoneme, (EmoSync* __this, String* phonemeName, float blendTime, MethodInfo* method));
DO_APP_FUNC(0x07EF8950, 0x07EFC980, void, EmoSync_EmoFinish, (EmoSync* __this, MethodInfo* method));
DO_APP_FUNC(0x07EF90F0, 0x07EFD120, void, EmoSync_PhoFinish, (EmoSync* __this, MethodInfo* method));

DO_APP_FUNC(0x09078730, 0x0907A490, void, Animator_Play, (Animator* __this, String* stateName, int32_t layer, float normalizedTime, MethodInfo* method));
DO_APP_FUNC(0x090788B0, 0x0907A610, void, Animator_Rebind, (Animator* __this, MethodInfo* method));
DO_APP_FUNC(0x09078DD0, 0x0907AB70, float, Animator_get_speed, (Animator* __this, MethodInfo* method));
DO_APP_FUNC(0x09078F00, 0x0907ACA0, void, Animator_set_speed, (Animator* __this, float value, MethodInfo* method));
DO_APP_FUNC(0x09078C00, 0x0907A9A0, Avatar*, Animator_get_avatar, (Animator* __this, MethodInfo* method));
DO_APP_FUNC(0x07A05E10, 0x07A0C2C0, String*, Extension_GetCurrentStateName, (Animator* animator, int32_t layer, AnimatorController* animCont, MethodInfo* method));

DO_APP_FUNC(0x090EDDC0, 0x090EE970, bool, Behaviour_get_isActiveAndEnabled, (Behaviour* __this, MethodInfo* method));

DO_APP_FUNC(0x090D59F0, 0x090D6C50, Vector3, Quaternion_ToEulerAngles, (Quaternion rotation, MethodInfo* method));
DO_APP_FUNC(0x02857F80, 0x0285BD80, Vector3, Quaternion_get_eulerAngles, (Quaternion__Boxed* __this, MethodInfo* method));
DO_APP_FUNC(0x08FFB340, 0x08FFC810, Rect, RectTransform_get_rect, (RectTransform* __this, MethodInfo* method));
DO_APP_FUNC(0x09119BB0, 0x0911A500, float, Canvas_get_scaleFactor, (/*Canvas**/void* __this, MethodInfo* method));

DO_APP_FUNC(0x08F78440, 0x08ECA290, void, Action_Invoke, (/*Action*/ void* __this, MethodInfo* method));

DO_APP_FUNC(0x02DCB540, 0x02DD0100, void, MoleMole_PlayerModule_ChangeGameTime, (MoleMole_PlayerModule* __this, float value, bool force, bool forceLocal, MethodInfo* method));
DO_APP_FUNC(0x03573CB0, 0x03578D00, void, LevelTimeManager_SetInternalTimeOfDay, (/*LevelTimeManager**/void* __this, float inHours, bool force, bool refreshEnviroTime, MethodInfo* method));

DO_APP_FUNC(0x04CA7B80, 0x04CADA50, void, Miscs_SetUILocalAvatarVisible, (bool visible, MethodInfo* method));

// Open team immediately
// F3 0F 10 83 ?? ?? ?? ?? 0F 29 74 24 30 F3 0F 10 B3 ?? ?? ?? ?? 
// f3 0f 10 83 ? ? ? ? 0f 29 74 24 ? f3 0f 10 b3 ? ? ? ? 0f 2f c6 76 ? e8 ? ? ? ? 48 8b 8b ? ? ? ? f3 0f 58 c6 f3 0f 11 83 ? ? ? ? 48 85 c9
DO_APP_FUNC(0x0365D280, 0x03662350, bool, MoleMole_InLevelMainPageContext_DoTeamCountDown_c_Iterator0__MoveNext, (InLevelMainPageContext_DoTeamCountDown_Iterator* __this, MethodInfo* method));
// 48 89 6c 24 ? 56 48 83 ec ? 48 8b 05 ? ? ? ? 33 ed 89 6c 24 ? 48 8b f1 48 8b 90
// 48 8b 8e ? ? ? ? 40 88 ae
DO_APP_FUNC(0x0439BA20, 0x043A0BB0, void, MoleMole_InLevelPlayerProfilePageContext_SetupView, (/*MoleMole_InLevelPlayerProfilePageContext*/void* __this, MethodInfo* method));
DO_APP_FUNC(0x04394BD0, 0x04399D50, void, MoleMole_InLevelPlayerProfilePageContext_ClearView, (/*MoleMole_InLevelPlayerProfilePageContext*/void* __this, MethodInfo* method));

// Skip enhance animation
DO_APP_FUNC(0x05776D00, 0x0577B550, void, MoleMole_EquipLevelUpDialogContext_SetupView, (MoleMole_EquipLevelUpDialogContext* __this, MethodInfo* method));
// e8 ? ? ? ? 48 8b d8 33 c0 48 89 45 ? 48 89 45 ? 48 89 45 ? 48 89 45 ? 48 89 45 ? 48 85 db 74 52 48 8b cb
DO_APP_FUNC(0x057768B0, 0x0577B100, void, MoleMole_EquipLevelUpDialogContext_ShowReturnedMaterialAndCloseDialog, (/*MoleMole_EquipLevelUpDialogContext*/ void* __this, MethodInfo* method));
DO_APP_FUNC(0x04886340, 0x0488C4E0, void, MoleMole_EquipOverviewPageContext_PlayExpAddAnimation, (/*MoleMole_EquipOverviewPageContext*/ void* __this, float startPer, float endPer, /*Action*/ void* callback, MethodInfo* method));
DO_APP_FUNC(0x04875D10, 0x0487BEA0, void, MoleMole_EquipOverviewPageContext_PlayLevelUpSuccessShow, (/*MoleMole_EquipOverviewPageContext*/ void* __this, /*Action*/ void* refreshViewAction, MethodInfo* method));

//RSA Patch
DO_APP_FUNC(0x087F4290, 0x087F6020, void, RSA_FromXmlString, (RSA* __this, String* xmlString, MethodInfo* method));

// Esp
DO_APP_FUNC(0x05AFDD50, 0x05B01B80, void, MoleMole_GadgetModule_DoOnGadgetStateNotify, (GadgetModule* __this, uint32_t gadgetEntityId, uint32_t gadgetState, bool isEnableInteract, MethodInfo* method));
DO_APP_FUNC(0x03099B50, 0x0309E520, void, MoleMole_LevelModule_OnSceneEntityAppear, (LevelModule* __this, Proto_SceneEntityAppearNotify* notify, uint32_t JOODHPBLPMA, MethodInfo* method));
DO_APP_FUNC(0x0309A2B0, 0x0309EC80, void, MoleMole_LevelModule_OnSceneEntityAppearAsync, (LevelModule* __this, Proto_SceneEntityAppearNotify* notify, uint32_t JOODHPBLPMA, MethodInfo* method));

// Singletons
// 3.3 ResolveCall("e8 ? ? ? ? 48 85 c0 0f 84 ? ? ? ? 48 89 74 24 ? 48 8b 0d ? ? ? ? 83 b9 ? ? ? ? ? 75 ? e8 ? ? ? ? 48 8b 0d");
DO_APP_FUNC(0x02151860, 0x02160EF0, void*, Singleton_GetInstance, (MethodInfo* method));
DO_APP_FUNC_METHODINFO(0x0C76FFC8, 0x0C772FC8, Singleton_1_MoleMole_UIManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0C770038, 0x0C773038, Singleton_1_MoleMole_PlayerModule__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0C7722A8, 0x0C7752A8, Singleton_1_MoleMole_EntityManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0C775E60, 0x0C778E60, Singleton_1_MoleMole_ItemModule__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0C773F60, 0x0C776F60, Singleton_1_MoleMole_NetworkManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0C772520, 0x0C775520, Singleton_1_MoleMole_EventManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0C7747A8, 0x0C7777A8, Singleton_1_InteractionManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0C77A0D0, 0x0C77D0D0, Singleton_1_MoleMole_ScenePropManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0C77CB00, 0x0C77FB00, Singleton_1_MoleMole_LoadingManager__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0C7734E0, 0x0C7764E0, Singleton_1_MoleMole_MapModule__get_Instance__MethodInfo);
DO_APP_FUNC_METHODINFO(0x0C7757E8, 0x0C7787E8, Singleton_1_MoleMole_MapManager__get_Instance__MethodInfo);

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
