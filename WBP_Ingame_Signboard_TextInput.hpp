#ifndef UE4SS_SDK_WBP_Ingame_Signboard_TextInput_HPP
#define UE4SS_SDK_WBP_Ingame_Signboard_TextInput_HPP

class UWBP_Ingame_Signboard_TextInput_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UPalMultiLineEditableTextBox* PalMultiLineEditableTextBox_48;               // 0x0480 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton;                                      // 0x0488 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0490 (size: 0x8)
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;                                // 0x0498 (size: 0x8)
    FDataTableRowHandle NoNameMsgID;                                                  // 0x04A0 (size: 0x10)
    int32 MaxTextLength;                                                              // 0x04B0 (size: 0x4)
    int32 MaxTextLineNum;                                                             // 0x04B4 (size: 0x4)
    FPalDataTableRowName_UIInputAction EscapeActionName;                              // 0x04B8 (size: 0x8)
    FPalUIActionBindData TriggerActionHandle;                                         // 0x04C0 (size: 0x4)
    bool IsRegisteredActionInput;                                                     // 0x04C4 (size: 0x1)

    class UWidget* CustomNavi_ToEditableText(EUINavigation Navigation);
    class UWidget* CustomNavi_ToConfirmButton(EUINavigation Navigation);
    class UWidget* CustomNavi_ToCloseButton(EUINavigation Navigation);
    void ResetInputAction();
    void SetupInputAction();
    class UWidget* BP_GetDesiredFocusTarget();
    void SetEnableConfirmButton(bool IsEnable);
    void BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_CommonButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void OnTriggerEscape();
    void OnClosed();
    void OnSetup();
    void BndEvt__WBP_Ingame_Signboard_TextInput_WBP_Menu_btn_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_Ingame_Signboard_TextInput_PalMultiLineEditableTextBox_48_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__WBP_Ingame_Signboard_TextInput_PalMultiLineEditableTextBox_48_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ExecuteUbergraph_WBP_Ingame_Signboard_TextInput(int32 EntryPoint);
}; // Size: 0x4C5

#endif
