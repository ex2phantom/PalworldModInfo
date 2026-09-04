#ifndef UE4SS_SDK_BP_KingWhale_BOSS_HPP
#define UE4SS_SDK_BP_KingWhale_BOSS_HPP

class ABP_KingWhale_BOSS_C : public ABP_KingWhale_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0D98 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule12;                       // 0x0DA0 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule11;                       // 0x0DA8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0DB0 (size: 0x8)
    class UNiagaraComponent* MarkEffect;                                              // 0x0DB8 (size: 0x8)
    FBP_KingWhale_BOSS_COnAirLargeDown OnAirLargeDown;                                // 0x0DC0 (size: 0x10)
    void OnAirLargeDown();
    EPalKingWhaleBattlePhase BattlePhase;                                             // 0x0DD0 (size: 0x1)
    bool IsAudioLock;                                                                 // 0x0DD1 (size: 0x1)
    TArray<class UAkStateValue*> PhaseState;                                          // 0x0DD8 (size: 0x10)

    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnInitialized(class APalCharacter* InCharacter);
    void NotifyAirLargeDown();
    void SetKingWhaleAudioPhase(EPalKingWhaleBattlePhase NewPhase);
    void OnRep_BattlePhase();
    void ApplyKingWhaleAudioPhase();
    void SetKingWhaleAudioPhaseLocked(bool bLocked);
    void OnHPGaugeCollisionOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnHPGaugeCollisionOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_KingWhale_BOSS(int32 EntryPoint);
    void OnAirLargeDown__DelegateSignature();
}; // Size: 0xDE8

#endif
