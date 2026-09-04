#ifndef UE4SS_SDK_BP_ReinforcedArrow_HPP
#define UE4SS_SDK_BP_ReinforcedArrow_HPP

class ABP_ReinforcedArrow_C : public ABP_Arrow_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    bool IsHitAble_0;                                                                 // 0x0480 (size: 0x1)
    double DamageRate_0;                                                              // 0x0488 (size: 0x8)
    bool BigTrail_0;                                                                  // 0x0490 (size: 0x1)
    bool Stung_0;                                                                     // 0x0491 (size: 0x1)
    TSubclassOf<class UPalSoundSlot> PalSoundSlotClass_0;                             // 0x0498 (size: 0x8)
    class UNiagaraSystem* Effect_Trail_S_0;                                           // 0x04A0 (size: 0x8)
    class UNiagaraSystem* Effect_Trail_L_0;                                           // 0x04A8 (size: 0x8)
    class ABP_CommonTrailActor_C* TrailActor_0;                                       // 0x04B0 (size: 0x8)
    double TrailFadeOutTime_0;                                                        // 0x04B8 (size: 0x8)
    class UCurveFloat* TrailFadeOutCurve_0;                                           // 0x04C0 (size: 0x8)

    void OnDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_ReinforcedArrow(int32 EntryPoint);
}; // Size: 0x4C8

#endif
