#ifndef UE4SS_SDK_BP_Action_CoopWeapon_AttachPenguinLauncher_HPP
#define UE4SS_SDK_BP_Action_CoopWeapon_AttachPenguinLauncher_HPP

class UBP_Action_CoopWeapon_AttachPenguinLauncher_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    class UBP_CoopParam_Weapon_C* CoopParam;                                          // 0x0168 (size: 0x8)
    class ABP_PenguinLauncher_C* WeaponObject;                                        // 0x0170 (size: 0x8)
    bool IsJumping;                                                                   // 0x0178 (size: 0x1)
    FVector ToTargetLocation;                                                         // 0x0180 (size: 0x18)
    double ElapsedTime;                                                               // 0x0198 (size: 0x8)
    double ScaleTime;                                                                 // 0x01A0 (size: 0x8)
    double LowerScaleSize;                                                            // 0x01A8 (size: 0x8)
    FVector OriginalScale;                                                            // 0x01B0 (size: 0x18)
    double VelocityXY;                                                                // 0x01C8 (size: 0x8)
    double JumpTimeSec;                                                               // 0x01D0 (size: 0x8)
    double JumpVelocity;                                                              // 0x01D8 (size: 0x8)
    TEnumAsByte<ECollisionEnabled::Type> TargetCollisionEnabled_Capsule;              // 0x01E0 (size: 0x1)
    TEnumAsByte<ECollisionEnabled::Type> TargetCollisionEnabled_Mesh;                 // 0x01E1 (size: 0x1)
    class USplineComponent* Spline;                                                   // 0x01E8 (size: 0x8)

    void GetLocationAtSpline(FVector StartLocation, FVector ArriveLocation, double Progress, FVector& NewLocation);
    void GetTargetCollisionSetting();
    void SetTargetCollision(bool IsEnable);
    void SetShooterDisableFlag(bool isDisable);
    void OnNotifyEnd_5D248DC6452B5B279DB010AF957CC7DD(FName NotifyName);
    void OnNotifyBegin_5D248DC6452B5B279DB010AF957CC7DD(FName NotifyName);
    void OnInterrupted_5D248DC6452B5B279DB010AF957CC7DD(FName NotifyName);
    void OnBlendOut_5D248DC6452B5B279DB010AF957CC7DD(FName NotifyName);
    void OnCompleted_5D248DC6452B5B279DB010AF957CC7DD(FName NotifyName);
    void OnEndAction();
    void TickAction(float DeltaTime);
    void OnBeginAction();
    void ExecuteUbergraph_BP_Action_CoopWeapon_AttachPenguinLauncher(int32 EntryPoint);
}; // Size: 0x1F0

#endif
