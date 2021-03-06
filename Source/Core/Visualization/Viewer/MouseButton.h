/****************************************************************************/
/**
 *  @file   MouseButton.h
 *  @author Naohisa Sakamoto
 */
/****************************************************************************/
#pragma once

namespace kvs
{

struct MouseButton
{
    enum Button
    {
        Left       = 0x00000000,
        Middle     = 0x00000001,
        Right      = 0x00000002,
        WheelUp    = 0x00000003,
        WheelDown  = 0x00000004

    };

    enum State
    {
        Down = 0x00000000,
        Up   = 0x00000001
    };

    enum Action
    {
        NoAction      = 0x00000000,
        Pressed       = 0x00000001,
        Moved         = 0x00000002,
        Released      = 0x00000003,
        DoubleClicked = 0x00000004,
        Wheeled       = 0x00000005,
    };
};

} // end of namespace kvs
