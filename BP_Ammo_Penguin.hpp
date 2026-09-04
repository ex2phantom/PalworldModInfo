#ifndef UE4SS_SDK_BP_Ammo_Penguin_HPP
#define UE4SS_SDK_BP_Ammo_Penguin_HPP

class ABP_Ammo_Penguin_C : public ABP_Ammo_Rocket_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class APalCharacter* Attacker Pal;                                                // 0x0318 (size: 0x8)
    class UMaterialInstanceDynamic* Mid;                                              // 0x0320 (size: 0x8)

    void OnRep_Attacker Pal();
    void ReceiveBeginPlay();
    void SetAttacker(class APalCharacter* AttackerPal);
    void UpdateMesh();
    void ExecuteUbergraph_BP_Ammo_Penguin(int32 EntryPoint);
}; // Size: 0x328

#endif
