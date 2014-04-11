/*
 *  Injectors - Fake GTA Text Implementation
 *
 *  Copyright (C) 2012-2014 LINK/2012 <dma_2012@hotmail.com>
 *
 *  This software is provided 'as-is', without any express or implied
 *  warranty. In no event will the authors be held liable for any damages
 *  arising from the use of this software.
 * 
 *  Permission is granted to anyone to use this software for any purpose,
 *  including commercial applications, and to alter it and redistribute it
 *  freely, subject to the following restrictions:
 * 
 *     1. The origin of this software must not be misrepresented; you must not
 *     claim that you wrote the original software. If you use this software
 *     in a product, an acknowledgment in the product documentation would be
 *     appreciated but is not required.
 * 
 *     2. Altered source versions must be plainly marked as such, and must not be
 *     misrepresented as being the original software.
 * 
 *     3. This notice may not be removed or altered from any source
 *     distribution.
 *
 */
#pragma once
#include <cstdio>
#include "fxt.hpp"

namespace injector
{
    /*
     *  Parses a FXT file @filename into the text manager @manager
     *  If unable to open the file, returns false, otherwise returns true
     */
    template<class TextManager>
    bool ParseFXT(TextManager& manager, const char* filename)
    {
        if(FILE* f = fopen(filename, "r"))
        {
            char buf[1024];
            
            // Alright, that format is pretty easy
            while(fgets(buf, sizeof(buf), f))
            {
                char *key = 0, *value = 0;

                // Parses the fxt line
                for(char* p = buf; *p; ++p)
                {
                    // # is used as comments...
                    if(*p == '#')
                    {
                        *p = 0;
                        break;
                    }

                    // If no key found yet...
                    if(key == 0)
                    {
                        // ...and the current iterating character is a space...
                        if(isspace(*p))
                        {
                            // ..we've just found that the key is there
                            *p = 0;
                            key = buf;
                        }
                    }
                    // But, if key has been found but no value found yet...
                    else if(value == 0)
                    {
                        // ...we are actually reading the first character from the value!
                        value = p;
                    }
                }

                // Adds into the text map only if found both key and value
                if(key && value) manager.add(key, value);
            }

            // Done
            fclose(f);
            return true;
        }
        
        return false;
    }

}
