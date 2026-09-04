#ifndef UE4SS_SDK_BP_GrassPanda_HPP
#define UE4SS_SDK_BP_GrassPanda_HPP

class ABP_GrassPanda_C : public ABP_MonsterBase_C
{
    class UPalSpeedCollisionComponent* PalSpeedCollision;                             // 0x0D30 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere1;                          // 0x0D38 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0D40 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule1;                        // 0x0D48 (size: 0x8)
    class UPalShooterComponent* PalShooter;                                           // 0x0D50 (size: 0x8)
    class UPalRideMarkerComponent* PalRideMarker;                                     // 0x0D58 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0D60 (size: 0x8)

}; // Size: 0xD68

#endif
