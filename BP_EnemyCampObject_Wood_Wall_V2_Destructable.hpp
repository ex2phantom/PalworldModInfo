#ifndef UE4SS_SDK_BP_EnemyCampObject_Wood_Wall_V2_Destructable_HPP
#define UE4SS_SDK_BP_EnemyCampObject_Wood_Wall_V2_Destructable_HPP

class ABP_EnemyCampObject_Wood_Wall_V2_Destructable_C : public APalBuildObjectBasicBase
{
    class UPalEnemyCampObjectSpawnMapObjectComponent* EnemyCampObjectSpawnMapObject;  // 0x0780 (size: 0x8)
    class UBoxComponent* AffectNavigationBox;                                         // 0x0788 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0790 (size: 0x8)
    class UStaticMeshComponent* SM_Wall_Wood;                                         // 0x0798 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x07A0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x07A8 (size: 0x8)

    void GetStaticMeshComponents(TArray<class UStaticMeshComponent*>& OutComponents);
    void GetStaticMeshInfos(TArray<FPalStaticMeshImposterStaticMeshInfo>& OutStaticMeshInfo);
}; // Size: 0x7B0

#endif
