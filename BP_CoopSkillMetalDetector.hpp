#ifndef UE4SS_SDK_BP_CoopSkillMetalDetector_HPP
#define UE4SS_SDK_BP_CoopSkillMetalDetector_HPP

class UBP_CoopSkillMetalDetector_C : public UPalCoopSkillMetalDetector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C0 (size: 0x8)
    TArray<class APalMapObject*> DetectedObj;                                         // 0x00C8 (size: 0x10)

    bool IsFinished();
    void Start(const FVector& Origin, int32 Rank, const FGuid& RequestPlayerUId);
    void ExecuteUbergraph_BP_CoopSkillMetalDetector(int32 EntryPoint);
}; // Size: 0xD8

#endif
