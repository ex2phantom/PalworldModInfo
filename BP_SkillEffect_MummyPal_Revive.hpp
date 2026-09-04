#ifndef UE4SS_SDK_BP_SkillEffect_MummyPal_Revive_HPP
#define UE4SS_SDK_BP_SkillEffect_MummyPal_Revive_HPP

class ABP_SkillEffect_MummyPal_Revive_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* NiagaraEffect_End;                                       // 0x0438 (size: 0x8)
    class UNiagaraComponent* NiagaraEffect_Start;                                     // 0x0440 (size: 0x8)
    class UStaticMeshComponent* SM_MummyPalSkill;                                     // 0x0448 (size: 0x8)
    class UMaterialInstanceDynamic* BangdageMaterial;                                 // 0x0450 (size: 0x8)
    double GenerateLerpTimeｒ;                                                         // 0x0458 (size: 0x8)
    double DisappearLerpTimer;                                                        // 0x0460 (size: 0x8)
    double DelayTimeGetUp;                                                            // 0x0468 (size: 0x8)
    bool IsRevived;                                                                   // 0x0470 (size: 0x1)
    double DisappearLerpTime;                                                         // 0x0478 (size: 0x8)
    FBP_SkillEffect_MummyPal_Revive_COnEndDisappearEffect OnEndDisappearEffect;       // 0x0480 (size: 0x10)
    void OnEndDisappearEffect();
    FBP_SkillEffect_MummyPal_Revive_COnGetup OnGetup;                                 // 0x0490 (size: 0x10)
    void OnGetup();
    double GenerateLerpTime;                                                          // 0x04A0 (size: 0x8)

    void ReceiveBeginPlay();
    void FadeOutEffect(double DeltaSecond);
    void OnEndAction();
    void OnRevived();
    void ReceiveTick(float DeltaSeconds);
    void OnShowBandage();
    void ExecuteUbergraph_BP_SkillEffect_MummyPal_Revive(int32 EntryPoint);
    void OnGetup__DelegateSignature();
    void OnEndDisappearEffect__DelegateSignature();
}; // Size: 0x4A8

#endif
