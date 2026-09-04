#ifndef UE4SS_SDK_BP_UniqueRideWeapon_TigerHammer_HPP
#define UE4SS_SDK_BP_UniqueRideWeapon_TigerHammer_HPP

class ABP_UniqueRideWeapon_TigerHammer_C : public APalUniqueRideWeaponBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06B8 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x06C0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x06C8 (size: 0x8)
    FName flagName;                                                                   // 0x06D0 (size: 0x8)

    void SetDisableShoot(bool Disable);
    bool IsUseLeftHandAttach();
    void ReceiveBeginPlay();
    void OnWeaponNotify(EWeaponNotifyType Type);
    void OnCoolDownCompleted();
    void OnPullTrigger();
    void ExecuteUbergraph_BP_UniqueRideWeapon_TigerHammer(int32 EntryPoint);
}; // Size: 0x6D8

#endif
