## TimeNotTouchingPadOpcode

An opcode for CLEO library, written with CLEO SDK.

**Works for**: GTASA

### SannyBuilder example

```delphi
{$CLEO}
{$OPCODE 1A00=2,%2d% = get_player %1d% time_not_touching_pad}

thread 'TimeTch'

while true
    wait 0
    1A00: 0@ = get_player 0 time_not_touching_pad
    if
        0@ > 2000
    then
        0AD1: show_formatted_text_highpriority "You didn't touch the pad for %d ms" time 100 0@
    end
end
```