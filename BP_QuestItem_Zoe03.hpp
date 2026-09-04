#ifndef UE4SS_SDK_BP_QuestItem_Zoe03_HPP
#define UE4SS_SDK_BP_QuestItem_Zoe03_HPP

class ABP_QuestItem_Zoe03_C : public APalLevelObjectQuestItem
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02F0 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x02F8 (size: 0x8)
    class USceneComponent* ターゲット;                                                     // 0x0300 (size: 0x8)
    FPalDataTableRowName_ItemData Item Data;                                          // 0x0308 (size: 0x8)
    bool Is Active;                                                                   // 0x0310 (size: 0x1)

    void UserConstructionScript();
    void OnChangedActiveInLocal(bool bIsActive);
    void ExecuteUbergraph_BP_QuestItem_Zoe03(int32 EntryPoint);
}; // Size: 0x311

#endif
