#ifndef UE4SS_SDK_BP_PenguinLauncher_HPP
#define UE4SS_SDK_BP_PenguinLauncher_HPP

class ABP_PenguinLauncher_C : public ABP_RocketLauncher_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06F0 (size: 0x8)
    FName Flag Name;                                                                  // 0x06F8 (size: 0x8)
    class UPalShooterComponent* Shooter;                                              // 0x0700 (size: 0x8)
    FVector BulletReloadLocationStart;                                                // 0x0708 (size: 0x18)
    FVector BulletReloadLocationEnd;                                                  // 0x0720 (size: 0x18)
    FRotator BulletReloadRotationStart;                                               // 0x0738 (size: 0x18)
    FRotator BulletReloadRotationEnd;                                                 // 0x0750 (size: 0x18)
    bool IsBulletInterpolation;                                                       // 0x0768 (size: 0x1)
    double BulletInterpolTime;                                                        // 0x0770 (size: 0x8)
    int32 WeaponDamageByOutSide;                                                      // 0x0778 (size: 0x4)
    class AActor* Attacker;                                                           // 0x0780 (size: 0x8)
    bool IsShootComplated;                                                            // 0x0788 (size: 0x1)

    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    void GetShootInterval(double& Time);
    class AActor* GetWeaponAttacker();
    void UpdateBulletTransform(double Delta);
    void SetDisplayReloadCompleted();
    void SetDisplayReloadStart(FVector StartLocation, FRotator StartRotation);
    int32 GetWeaponDamage();
    void ChangeTransformForRocketReload(FVector Location, FRotator Rotation);
    void ChangeTransformForRocketWhenReloadIsDone(FVector Location, FRotator Lotation);
    void OnPullTrigger();
    void ShootComplated();
    void OnAttachWeapon(class AActor* attachActor);
    void ReceiveTick(float DeltaSeconds);
    void SetWeaponDamage(int32 Damageam);
    void SetAttacker(class AActor* AttackerPal);
    void OnWeaponNotify(EWeaponNotifyType Type);
    void OnReloadStart(float InReloadSpeedPlayRate);
    void OnShoot(class APalBullet* BulletActor);
    void ExecuteUbergraph_BP_PenguinLauncher(int32 EntryPoint);
}; // Size: 0x789

#endif
