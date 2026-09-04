#ifndef UE4SS_SDK_BP_Action_SpawnItem_ElecSnail_HPP
#define UE4SS_SDK_BP_Action_SpawnItem_ElecSnail_HPP

class UBP_Action_SpawnItem_ElecSnail_C : public UPalActionSpawnItem
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01A0 (size: 0x8)
    class UAnimInstance* AnimInst;                                                    // 0x01A8 (size: 0x8)
    class APalCharacter* ActionCharacter;                                             // 0x01B0 (size: 0x8)
    class UAnimMontage* ChargeMontage;                                                // 0x01B8 (size: 0x8)
    bool IsFnishByAbortMontage;                                                       // 0x01C0 (size: 0x1)
    class UPalFacialComponent* Facial;                                                // 0x01C8 (size: 0x8)
    EPalFacialEyeType ChargeFacialEye;                                                // 0x01D0 (size: 0x1)
    FTimerHandle ChargeTimer;                                                         // 0x01D8 (size: 0x8)
    class UAnimMontage* FunMontage;                                                   // 0x01E0 (size: 0x8)
    EPalFacialEyeType FunFacialEye;                                                   // 0x01E8 (size: 0x1)

    void EndProc();
    void StopFunMontage();
    void StopChargeMontage();
    void OnNotifyEnd_2F8C9B334B8EE3559BA32E9E6D0FB68E(FName NotifyName);
    void OnNotifyBegin_2F8C9B334B8EE3559BA32E9E6D0FB68E(FName NotifyName);
    void OnInterrupted_2F8C9B334B8EE3559BA32E9E6D0FB68E(FName NotifyName);
    void OnBlendOut_2F8C9B334B8EE3559BA32E9E6D0FB68E(FName NotifyName);
    void OnCompleted_2F8C9B334B8EE3559BA32E9E6D0FB68E(FName NotifyName);
    void OnNotifyEnd_7897CA1C4F990E60D31913BAB3B1CDC5(FName NotifyName);
    void OnNotifyBegin_7897CA1C4F990E60D31913BAB3B1CDC5(FName NotifyName);
    void OnInterrupted_7897CA1C4F990E60D31913BAB3B1CDC5(FName NotifyName);
    void OnBlendOut_7897CA1C4F990E60D31913BAB3B1CDC5(FName NotifyName);
    void OnCompleted_7897CA1C4F990E60D31913BAB3B1CDC5(FName NotifyName);
    void StartFun();
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_SpawnItem_ElecSnail(int32 EntryPoint);
}; // Size: 0x1E9

#endif
