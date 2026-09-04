#ifndef UE4SS_SDK_WBP_KeyGuard_HPP
#define UE4SS_SDK_WBP_KeyGuard_HPP

class UWBP_KeyGuard_C : public UUserWidget
{
    class UEditableTextBox* SearchInput;                                              // 0x0278 (size: 0x8)

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
}; // Size: 0x280

#endif
