# Minutes for the 2024-02 Eye Gaze Working Group meeting

## Meeting Location

Virtual Location: Zoom

## Meeting Time
7 AM PST, March 28 2024

## Attendees
- Jay Beavers - Tolt Technologies
- Jon Campbell - Cephable
- Pete Norloff
- Spero
- Adina Bradshaw
- Blair Casey
- Kristy McNaught
- Nachum Lehman
- Phil Webb
- Preethi Vaidyanathan
- Shea Ako
- Travis Spire-Sweet
- Yossi Blum

If you attended the meeting and you are not listed here, please contact [Jon Campbell](jcampbell@cephable.com) to be added to the list.

## Agenda

[Agenda](./agenda.md)

## Meeting Notes
Baseline intent is to see where the gaps in existing HID spec and support, Push as industry change that is needed. Some holes in existing operating system implementations, such as lack of Win32 API support for Eye Gaze HID.

https://github.com/MSREnable/GazeHid/ - Implementation of the HID spec, universal driver that accepts X/Y coordinates and translates it into a HID eye gaze packet.

Who is not in the room that should be?  Apple, Google, Microsoft.  Who has contacts that can help achieve that?

For those that has reviewed the spec, what are the high level comments? Missing features or concerns? Most indicated it is a decent baseline. Multiple folks noted lack of API support for desktop style apps on Windows.
Discussion of alternate transports for the data, such as IP, Bluetooth, RPC, etc. One person wanted to eliminate the head tracker (head mouse). Multiple screens needs to be considered (currently one screen in HID spec).

Test suite would be desirable. Existing GazeHid implementation is a good start, but more comprehensive testing would be beneficial.

Discussion of whether gestures should be built into hid spec. Some folks think it should be, others think it should be separate. Definition of what a gesture even is, such as blink, is unclear.

Swith support is a complementary feature to eye gaze. Some devices include it. In general, it is a separate feature and outside the scope of the eye gaze spec.

Discussion of how data should be presented to the user. Raw data is preferred by most. Calibration is a separate issue.

The core data structures, as defined in the MSFT driver framework: https://github.com/microsoft/DMF/blob/master/Dmf/Modules.Library/Dmf_EyeGazeIoctl_Public.h#L44

Plug and Play. Can we get here? 

Discussion of calibration. Some support in current specification. Need for dynamic calibrations, which would demand talking to software, OS and EG.

Todd Tyler will act as secretary and help for note keeping. 

Jon's email:  jcampbell@cephable.com
 
# Next Meeting
May 30, 2024 on zoom, 7am PST

## Adjournment

# Action Items
Take a look at Spec.  High level comments.  (Missing features or concerns).
Jay's request: Look at data structures (3 to review).  Thoughts on better data structures.  Jay sent in chat Microsoft.  Jay will post another link for people to review.  (Jon pointed to links)
