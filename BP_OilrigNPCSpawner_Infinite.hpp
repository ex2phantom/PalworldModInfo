#ifndef UE4SS_SDK_BP_OilrigNPCSpawner_Infinite_HPP
#define UE4SS_SDK_BP_OilrigNPCSpawner_Infinite_HPP

class ABP_OilrigNPCSpawner_Infinite_C : public ABP_OilrigNPCSpawnerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    bool IsActiveNPC;                                                                 // 0x0330 (size: 0x1)
    int32 Const_MaxSpawnNum;                                                          // 0x0334 (size: 0x4)
    FTimerHandle TimerHandle;                                                         // 0x0338 (size: 0x8)
    double Const_RespawnTimeSecond;                                                   // 0x0340 (size: 0x8)
    int32 CurrentSpawnedCount;                                                        // 0x0348 (size: 0x4)

    void RespawnNextNPC();
    void On Dead(FPalDeadInfo DeadInfo);
    void On Captured(class APalCharacter* SelfCharacter, class APalCharacter* Attacker);
    void Spawn Delegate(FPalInstanceID ID);
    void OnResetOilrig_BP();
    void BlueprintTick_Spawning(float DeltaTime);
    void BlueprintTick_Despawning(float DeltaTime);
    void ExecuteUbergraph_BP_OilrigNPCSpawner_Infinite(int32 EntryPoint);
}; // Size: 0x34C

#endif
