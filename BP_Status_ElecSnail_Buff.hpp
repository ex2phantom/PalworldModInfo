#ifndef UE4SS_SDK_BP_Status_ElecSnail_Buff_HPP
#define UE4SS_SDK_BP_Status_ElecSnail_Buff_HPP

class UBP_Status_ElecSnail_Buff_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    float BuffTime;                                                                   // 0x00B8 (size: 0x4)

    void EndBuff();
    void SetupStatus();
    void OnBeginStatus();
    void LateSetup(class APalCharacter* InCharacter);
    void OnEndStatus();
    void ExecuteUbergraph_BP_Status_ElecSnail_Buff(int32 EntryPoint);
}; // Size: 0xBC

#endif
