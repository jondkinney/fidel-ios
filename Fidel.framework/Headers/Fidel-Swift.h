// Generated by Apple Swift version 4.0.2 effective-3.2.2 (swiftlang-900.0.69.2 clang-900.0.38)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import Foundation;
@import UIKit;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("Fidel")


@class UIColor;
@class NSCoder;

/// A text field that provides additional UI customization.
SWIFT_CLASS("_TtC5Fidel17StylizedTextField")
@interface StylizedTextField : UITextField <UITextFieldDelegate>
/// Changes to this parameter draw the border of <code>self</code> in the given width.
@property (nonatomic) CGFloat borderWidth;
/// If <code>borderWidth</code> has been set, changes to this parameter round the corners of <code>self</code> in the given corner radius.
@property (nonatomic) CGFloat cornerRadius;
/// If <code>borderWidth</code> has been set, changes to this parameter change the color of the border of <code>self</code>.
@property (nonatomic, strong) UIColor * _Nonnull borderColor;
/// A method which will be called, when the delete key has been pressed for an empty text field.
@property (nonatomic, copy) void (^ _Nullable deleteBackwardCallback)(UITextField * _Nonnull);
@property (nonatomic, copy) NSString * _Nullable text;
/// The color in which text flashes, when the user is about to enter an invalid card number.
@property (nonatomic, strong) UIColor * _Nonnull invalidInputColor;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@property (nonatomic, copy) NSString * _Nullable placeholder;
- (BOOL)becomeFirstResponder;
- (void)drawRect:(CGRect)rect;
- (void)drawPlaceholderInRect:(CGRect)rect;
- (BOOL)textField:(UITextField * _Nonnull)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString * _Nonnull)string SWIFT_WARN_UNUSED_RESULT;
@end

@protocol CardInfoTextFieldDelegate;

/// A text field subclass that validates any input for card detail before changing the text attribute.
/// You can subclass <code>DetailInputTextField</code> and override <code>isInputValid</code> to specify the validation routine.
/// The default implementation accepts any input.
SWIFT_CLASS("_TtC5Fidel20DetailInputTextField")
@interface DetailInputTextField : StylizedTextField
@property (nonatomic, strong) id <CardInfoTextFieldDelegate> _Nullable cardInfoTextFieldDelegate;
- (void)textFieldDidBeginEditing:(UITextField * _Nonnull)textField;
- (BOOL)textField:(UITextField * _Nonnull)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString * _Nonnull)string SWIFT_WARN_UNUSED_RESULT;
- (void)prefill:(NSString * _Nonnull)text;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


/// A text field which can be used to enter CVCs and provides validation of the same.
SWIFT_CLASS("_TtC5Fidel17CVCInputTextField")
@interface CVCInputTextField : DetailInputTextField
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


/// A protocol for the delegate of a <code>DetailInputTextField</code>.
SWIFT_PROTOCOL("_TtP5Fidel25CardInfoTextFieldDelegate_")
@protocol CardInfoTextFieldDelegate
/// Called whenever valid information was entered into <code>textField</code>.
/// \param textField The text field whose information was updated and is valid.
///
/// \param didEnterValidInfo The valid information that was entered into <code>textField</code>.
///
- (void)textField:(UITextField * _Nonnull)textField didEnterValidInfo:(NSString * _Nonnull)didEnterValidInfo;
/// Called whenever partially valid information was entered into <code>textField</code>.
/// \param textField The text field whose information was updated and is partially valid.
///
/// \param didEnterPartiallyValidInfo The partially valid information that was entered.
///
- (void)textField:(UITextField * _Nonnull)textField didEnterPartiallyValidInfo:(NSString * _Nonnull)didEnterPartiallyValidInfo;
/// Called whenever more text was entered into <code>textField</code> than necessary. This can be used to provide this overflow as text in the next text field in the responder chain.
/// \param textField The text field which received more information than required.
///
/// \param overFlowDigits The overflow of text which does not fit into <code>textField</code> and might be entered into the next receiver in the responder chain.
///
- (void)textField:(UITextField * _Nonnull)textField didEnterOverflowInfo:(NSString * _Nonnull)overFlowDigits;
@end

@class NumberInputTextField;

/// The delegate protocol for a <code>NumberInputTextField</code>. The delegate gets notified about changes to the text, as well as an update, if a valid card number has been entered.
SWIFT_PROTOCOL("_TtP5Fidel28NumberInputTextFieldDelegate_")
@protocol NumberInputTextFieldDelegate
/// Called when the user entered a valid card number.
/// \param numberInputTextField The <code>NumberInputTextField</code> that was used to enter a card number.
///
- (void)numberInputTextFieldDidComplete:(NumberInputTextField * _Nonnull)numberInputTextField;
/// Called when the user changed the text in the <code>NumberInputTextField</code>.
/// \param numberInputTextField The <code>NumberInputTextField</code> whose text was changed.
///
- (void)numberInputTextFieldDidChangeText:(NumberInputTextField * _Nonnull)numberInputTextField;
@end

@class UIImageView;
@class UIButton;
@class MonthInputTextField;
@class YearInputTextField;
@class UIView;
@class NSAttributedString;
@class UITouch;
@class UIEvent;

/// This kind of text field serves as a container for subviews, which allow a user to enter card information.
/// The typical structure of a <code>CardTextField</code>’s subviews is as follows:
/// <ul>
///   <li>
///     _: UIView (in most cases with a transparent background in order to not hide the CardTextField)
///     <ul>
///       <li>
///         cardImageView: UIImageView
///       </li>
///       <li>
///         CardNumberInputTextField (for entering a card number)
///       </li>
///       <li>
///         cardInfoView: UIView (container for other views to enter additional information after entering a valid card number) with subviews ordered from left to right:
///         <ul>
///           <li>
///             monthTextField: StylizedTextField
///           </li>
///           <li>
///             yearTextField: StylizedTextField
///           </li>
///           <li>
///             cvcTextField: StylizedTextField
///           </li>
///         </ul>
///       </li>
///     </ul>
///   </li>
/// </ul>
/// In order to create a custom CardTextField, you can create a subclass which overrides <code>getNibName()</code> and <code>getNibBundle()</code> in order to load a nib from a specific bundle, which follows this structure
SWIFT_CLASS("_TtC5Fidel13CardTextField")
@interface CardTextField : UITextField <NumberInputTextFieldDelegate>
/// The image view which is used to display the detected card type.
@property (nonatomic, weak) IBOutlet UIImageView * _Nullable cardImageView;
/// A but which is shown only when the delegate’s
@property (nonatomic, weak) IBOutlet UIButton * _Nullable accessoryButton;
/// The formatted text field which is used to enter the card number.
@property (nonatomic, weak) IBOutlet NumberInputTextField * _Null_unspecified numberInputTextField;
/// The text field which is used to enter the card validation code.
@property (nonatomic, weak) IBOutlet CVCInputTextField * _Null_unspecified cvcTextField;
/// The text field which is used to enter the month of the expiry date.
@property (nonatomic, weak) IBOutlet MonthInputTextField * _Null_unspecified monthTextField;
/// The text field which is used to enter the year of the expiry date.
@property (nonatomic, weak) IBOutlet YearInputTextField * _Null_unspecified yearTextField;
/// The view which is slided in from the right after a valid card number has been entered.
@property (nonatomic, weak) IBOutlet UIView * _Nullable cardInfoView;
/// The string value that is used to separate the different groups of a card number in the text field.
@property (nonatomic, copy) NSString * _Nullable cardNumberSeparator;
/// The duration of the view animation when switching from number input to detail.
@property (nonatomic) double viewAnimationDuration;
/// The text color for invalid input in a text field.
@property (nonatomic, strong) UIColor * _Nullable invalidInputColor;
/// Inset before the card type image view. Defaults to 1.0.
@property (nonatomic) CGFloat imageViewLeadingInset;
/// Inset after the card type image view. Defaults to 4.0.
@property (nonatomic) CGFloat imageViewTrailingInset;
@property (nonatomic) CGFloat accessoryButtonLeadingInset;
@property (nonatomic) CGFloat accessoryButtonTrailingInset;
@property (nonatomic, copy) NSString * _Nullable placeholder;
@property (nonatomic, strong) NSAttributedString * _Nullable attributedPlaceholder;
@property (nonatomic, readonly) BOOL isFirstResponder;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (void)willMoveToSuperview:(UIView * _Nullable)newSuperview;
- (void)didMoveToSuperview;
/// You can override this function to provide your own Nib. If you do so, please override ‘getNibBundle’ as well to provide the right NSBundle to load the nib file.
- (NSString * _Nonnull)getNibName SWIFT_WARN_UNUSED_RESULT;
/// You can override this function to provide the NSBundle for your own Nib. If you do so, please override ‘getNibName’ as well to provide the right Nib to load the nib file.
- (NSBundle * _Nonnull)getNibBundle SWIFT_WARN_UNUSED_RESULT;
- (void)numberInputTextFieldDidChangeText:(NumberInputTextField * _Nonnull)numberInputTextField;
- (void)numberInputTextFieldDidComplete:(NumberInputTextField * _Nonnull)numberInputTextField;
- (void)layoutSubviews;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
/// There are 5 elements that enables accessibility in a CardTextField.
/// They are numberInputTextField, monthTextField, yearTextField, cvcTextField and accessoryButton.
/// They should be focused when user click on one of them when accessibility is on.
///
/// returns:
/// total number accessibility elements in the container CardTextField
- (NSInteger)accessibilityElementCount SWIFT_WARN_UNUSED_RESULT;
/// Returns the accessibility element at the specified index
/// \param index The index of the accessibility element
///
///
/// returns:
/// The accessibility element at the specified index, or nil if none exists
- (id _Nullable)accessibilityElementAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (BOOL)becomeFirstResponder SWIFT_WARN_UNUSED_RESULT;
- (BOOL)resignFirstResponder SWIFT_WARN_UNUSED_RESULT;
@end




@interface CardTextField (SWIFT_EXTENSION(Fidel))
/// Moves the card number input field to the left outside of the screen with an animation of the duration <code>viewAnimationDuration</code>, so that only the last group of the card number is visible. At the same time, the card detail (expiration month and year and CVC) slide in from the right.
- (void)moveCardNumberOutAnimated;
/// Moves the full card number input field to inside the screen with an animation of the duration <code>viewAnimationDuration</code>. At the same time, the card detail (expiration month and year and CVC) slide outside the view.
- (void)moveCardNumberInAnimated;
/// Moves the card number input field to the left outside of the screen, so that only the last group of the card number is visible. At the same time, the card detail (expiration month and year and CVC) are displayed to its right.
- (void)moveCardNumberOut;
/// Moves the full card number input field to inside the screen. At the same time, the card detail (expiration month and year and CVC) are moved outside the view.
- (void)moveCardNumberIn;
- (void)translateCardNumberIn;
@end


@interface CardTextField (SWIFT_EXTENSION(Fidel)) <CardInfoTextFieldDelegate>
- (void)textField:(UITextField * _Nonnull)textField didEnterValidInfo:(NSString * _Nonnull)didEnterValidInfo;
- (void)textField:(UITextField * _Nonnull)textField didEnterPartiallyValidInfo:(NSString * _Nonnull)didEnterPartiallyValidInfo;
- (void)textField:(UITextField * _Nonnull)textField didEnterOverflowInfo:(NSString * _Nonnull)overFlowDigits;
@end

@class UIFont;

@interface CardTextField (SWIFT_EXTENSION(Fidel))
@property (nonatomic, strong) UIColor * _Nullable textColor;
@property (nonatomic, strong) UIColor * _Nullable backgroundColor;
@property (nonatomic, strong) UIFont * _Nullable font;
@property (nonatomic) UIKeyboardType keyboardType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) UIKeyboardAppearance keyboardAppearance;
@end







/// A text field which can be used to enter months and provides validation and auto completion.
SWIFT_CLASS("_TtC5Fidel19MonthInputTextField")
@interface MonthInputTextField : DetailInputTextField
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


/// This kind of text field only allows entering card numbers and provides means to customize the appearance of entered card numbers by changing the card number group separator.
SWIFT_CLASS("_TtC5Fidel20NumberInputTextField")
@interface NumberInputTextField : StylizedTextField
///
@property (nonatomic, weak) IBOutlet id <NumberInputTextFieldDelegate> _Nullable numberInputTextFieldDelegate;
/// The string that is used to separate different groups in a card number.
@property (nonatomic, copy) NSString * _Nonnull cardNumberSeparator;
@property (nonatomic, copy) NSString * _Nullable accessibilityValue;
@property (nonatomic, strong) UIColor * _Nullable textColor;
- (BOOL)textField:(UITextField * _Nonnull)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString * _Nonnull)string SWIFT_WARN_UNUSED_RESULT;
/// Prefills the card number. The entered card number will only be prefilled if it is at least partially valid and will be displayed formatted.
/// \param text The card number which should be displayed in <code>self</code>.
///
- (void)prefill:(NSString * _Nonnull)text;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end






/// A text field which can be used to enter years and provides validation.
SWIFT_CLASS("_TtC5Fidel18YearInputTextField")
@interface YearInputTextField : DetailInputTextField
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop