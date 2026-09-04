#ifndef UE4SS_SDK_BP_Action_Coop_RevivePal_Main_HPP
#define UE4SS_SDK_BP_Action_Coop_RevivePal_Main_HPP

class UBP_Action_Coop_RevivePal_Main_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    double ReviveTime;                                                                // 0x0168 (size: 0x8)
    FName flagName;                                                                   // 0x0170 (size: 0x8)
    double ReviveTimer;                                                               // 0x0178 (size: 0x8)
    bool IsRevived;                                                                   // 0x0180 (size: 0x1)
    bool IsResetRagdoll;                                                              // 0x0181 (size: 0x1)
    TSubclassOf<class ABP_SkillEffectBase_C> SkillEffectClass;                        // 0x0188 (size: 0x8)
    class ABP_SkillEffect_MummyPal_Revive_C* SkillEffectBP;                           // 0x0190 (size: 0x8)

    void CreateSkillEffect();
    void ResetLocation();
    void SetFacial();
    void SetDisableMovement(bool isDisable);
    void FullRecoveryHP();
    void ResetRagdoll();
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void OnEndDissapearEffect();
    void OnGetup();
    void ExecuteUbergraph_BP_Action_Coop_RevivePal_Main(int32 EntryPoint);
}; // Size: 0x198

#endif
