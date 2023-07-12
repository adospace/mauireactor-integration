#ifndef EditorType_h
#define EditorType_h

typedef NS_ENUM(NSInteger, EditorType) {
  EditorTypeText = 0,
  EditorTypeMultilineText,
  EditorTypeNumeric,
  EditorTypeMask,
  EditorTypePercent,
  EditorTypeCurrency,
  EditorTypeDateTime,
  EditorTypeDate,
  EditorTypeTime,
  EditorTypeSwitch,
  EditorTypeCheckbox,
  EditorTypePicker,
  EditorTypeAutoComplete,
  EditorTypePassword,
  EditorTypeCustom
};

#endif /* EditorType_h */
