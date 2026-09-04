#ifndef UE4SS_SDK_BP_EnemyCampObject_Spa_HPP
#define UE4SS_SDK_BP_EnemyCampObject_Spa_HPP

class ABP_EnemyCampObject_Spa_C : public APalBuildObject
{
    class UPalEnemyCampObjectSpawnMapObjectComponent* EnemyCampObjectSpawnMapObject;  // 0x0750 (size: 0x8)
    class UNiagaraComponent* NS_PalSpaSteam;                                          // 0x0758 (size: 0x8)
    class UStaticMeshComponent* SM_PalSpa;                                            // 0x0760 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0768 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0770 (size: 0x8)

}; // Size: 0x778

#endif
