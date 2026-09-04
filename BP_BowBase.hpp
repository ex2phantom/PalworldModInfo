#ifndef UE4SS_SDK_BP_BowBase_HPP
#define UE4SS_SDK_BP_BowBase_HPP

class ABP_BowBase_C : public APalWeaponBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0688 (size: 0x8)
    class UCameraShakeSourceComponent* CameraShakeSource;                             // 0x0690 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0698 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x06A0 (size: 0x8)
    class AActor* RightHandArrow;                                                     // 0x06A8 (size: 0x8)
    bool IsSqueeze;                                                                   // 0x06B0 (size: 0x1)
    int32 ChargeCount;                                                                // 0x06B4 (size: 0x4)
    bool IsAim;                                                                       // 0x06B8 (size: 0x1)
    class UAnimSequence* WeaponAnime_Charge;                                          // 0x06C0 (size: 0x8)
    class UAnimSequence* WeaponAnime_ChargeLoop;                                      // 0x06C8 (size: 0x8)
    class UAnimSequence* WeaponAnime_Fire;                                            // 0x06D0 (size: 0x8)
    class UAnimSequence* WeaponAnime_Idle;                                            // 0x06D8 (size: 0x8)
    bool PullCancelFlag;                                                              // 0x06E0 (size: 0x1)
    TSubclassOf<class ULegacyCameraShake> CameraShake;                                // 0x06E8 (size: 0x8)
    class UCurveFloat* EmissiveCurve;                                                 // 0x06F0 (size: 0x8)
    double EmiisiveCurveInput;                                                        // 0x06F8 (size: 0x8)
    class UNiagaraComponent* MaxChargeEffectHandle;                                   // 0x0700 (size: 0x8)
    int32 ArrowShootNumber;                                                           // 0x0708 (size: 0x4)
    TSubclassOf<class ULegacyCameraShake> BowChargedCameraShake;                      // 0x0710 (size: 0x8)
    class UNiagaraSystem* Effect_Wind;                                                // 0x0718 (size: 0x8)
    TArray<class APalBullet*> CreatedBullets;                                         // 0x0720 (size: 0x10)
    class UNiagaraSystem* Effect_Charge;                                              // 0x0730 (size: 0x8)
    TSubclassOf<class AActor> RightHandChildArrow;                                    // 0x0738 (size: 0x8)
    bool CanShootOnRelease_ForRep;                                                    // 0x0740 (size: 0x1)

    void IsEnableCameraShake(bool& IsEnable);
    bool SeekRightHandOpen();
    void PlayFireSound(class UAkAudioEvent* AkEvent);
    void GetShooterAsset(class UBP_ShooterAnime_BowBase_C*& ShooterAnimBow);
    void CreateArrowBullet(int32 Index);
    void PlayMaxChargeEffect();
    void GetMuzle();
    void SetMaxChargeEffect(double CurveInput);
    void GetDynamicMaterial(class UMaterialInstanceDynamic*& Mid);
    float CalcRange();
    float CalcAccuracy();
    float CalcDPS();
    bool SeekLeftHandOpen();
    void ChangeRideAnim_ChargeAndFire();
    void RightHandArowSetHide(bool Hide);
    void BowAnime_Stop();
    void BowAnime_Fire();
    void BowAnime_ChargeLoop();
    void BowAnime_Charge();
    void ReloadArrow();
    void Shot();
    void GetTargetPosition(FVector& targetPosition);
    void CreateArrowModel();
    bool IsUseLeftHandAttach();
    FName GetEquipSocketName();
    void OnDetachWeapon(class AActor* detachActor);
    void OnPullTrigger();
    void OnStartAim();
    void OnEndAim();
    void OnWeaponNotify(EWeaponNotifyType Type);
    void OnReleaseTrigger(bool bCanShootOnRelease);
    void OnPullCancel();
    void ReceiveTick(float DeltaSeconds);
    void OnAttachWeapon(class AActor* attachActor);
    void ExecuteUbergraph_BP_BowBase(int32 EntryPoint);
}; // Size: 0x741

#endif
