#ifndef UE4SS_SDK_BP_Action_Coop_RevivePlayer_Main_HPP
#define UE4SS_SDK_BP_Action_Coop_RevivePlayer_Main_HPP

class UBP_Action_Coop_RevivePlayer_Main_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    class UAnimMontage* Anim Montage;                                                 // 0x0168 (size: 0x8)
    double ElapsedTime;                                                               // 0x0170 (size: 0x8)
    double ReviveTime;                                                                // 0x0178 (size: 0x8)
    class AActor* TargetPlayer;                                                       // 0x0180 (size: 0x8)
    FVector ReviveLocationOffset;                                                     // 0x0188 (size: 0x18)
    FName flagName;                                                                   // 0x01A0 (size: 0x8)
    FShooterSpringCameraParameter CameraOffset;                                       // 0x01A8 (size: 0x28)

    void EndCamera();
    void StartCamera();
    void ResetLocation();
    void UpdateTransform();
    void CalcReviveRotation(FRotator& NewParam);
    FVector CalcReviveLocation();
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Coop_RevivePlayer_Main(int32 EntryPoint);
}; // Size: 0x1D0

#endif
