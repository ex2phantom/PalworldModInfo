#ifndef UE4SS_SDK_BP_PenguinBullet_HPP
#define UE4SS_SDK_BP_PenguinBullet_HPP

class ABP_PenguinBullet_C : public ABP_AttackBulletBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0428 (size: 0x8)
    class UPalHitFilter* HitFilter;                                                   // 0x0430 (size: 0x8)
    bool IsExploded;                                                                  // 0x0438 (size: 0x1)
    double ElapsedTime;                                                               // 0x0440 (size: 0x8)
    double LifeSec;                                                                   // 0x0448 (size: 0x8)
    class APalCharacter* Attacker Pal;                                                // 0x0450 (size: 0x8)
    class UMaterialInstanceDynamic* Mid;                                              // 0x0458 (size: 0x8)

    void GetExplosionClass(TSubclassOf<class ABP_ExplosionAttackBase_C>& ExplosionClass);
    void UpdateElapsedTime(double DeltaTime);
    void OnHitToActor(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void Smoke();
    void SetAttacker(class APalCharacter* AttackerPal);
    void UpdateMesh();
    void ExecuteUbergraph_BP_PenguinBullet(int32 EntryPoint);
}; // Size: 0x460

#endif
