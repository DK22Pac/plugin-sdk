Hooking.Patterns
----------------
Sample:

```cpp
#include "stdafx.h"
#include <windows.h>
#include "Hooking.Patterns.h"

int main()
{
    auto pattern = hook::pattern("54 68 69 73 20 70 72 6F 67 72");
    if (!pattern.count_hint(1).empty())
    {
        auto text = pattern.get(0).get<char>(0);
        MessageBoxA(0, text, text, 0);
    }
    return 0;
}
```

Result:

![MessageBox](http://i.imgur.com/Tuijf2I.png)
