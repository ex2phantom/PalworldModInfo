#ifndef UE4SS_SDK_WBP_Ingame_Signboard_3DText_HPP
#define UE4SS_SDK_WBP_Ingame_Signboard_3DText_HPP

class UWBP_Ingame_Signboard_3DText_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_C_54;                           // 0x0458 (size: 0x8)
    class UImage* Image_70;                                                           // 0x0460 (size: 0x8)
    FDataTableRowHandle NoNameMsgID;                                                  // 0x0468 (size: 0x10)

    FText GetText();
    void UpdateText(FString Text);
    void ExecuteUbergraph_WBP_Ingame_Signboard_3DText(int32 EntryPoint);
}; // Size: 0x478

#endif
