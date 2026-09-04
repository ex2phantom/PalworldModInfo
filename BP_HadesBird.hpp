#ifndef UE4SS_SDK_BP_HadesBird_HPP
#define UE4SS_SDK_BP_HadesBird_HPP

class ABP_HadesBird_C : public ABP_MonsterBase_C
{
    class USceneComponent* InteractIndicatorOrigin;                                   // 0x0D30 (size: 0x8)
    class UPalFlyMeshHeightCtrlComponent* PalFlyMeshHeightCtrl;                       // 0x0D38 (size: 0x8)
    class UBP_PalTimerPointLightComponent_C* BP_PalTimerPointLightComponent;          // 0x0D40 (size: 0x8)
    class UPalSpeedCollisionComponent* PalSpeedCollision1;                            // 0x0D48 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0D50 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0D58 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule3;                        // 0x0D60 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule2;                        // 0x0D68 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule1;                        // 0x0D70 (size: 0x8)
    class UBP_PalRideMarkerBiggerHorse_C* BP_PalRideMarkerBiggerHorse;                // 0x0D78 (size: 0x8)

    void GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>& OutComponent);
}; // Size: 0xD80

#endif
