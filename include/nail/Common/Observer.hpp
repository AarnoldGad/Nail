// Observer.hpp
// Gaétan "Gad" Jalin
// 29 Jul 2021
// See end of file for complete license description
#ifndef NAIL_OBSERVER_HPP
#define NAIL_OBSERVER_HPP

namespace nail
{
    template<typename Fn>
    class Observer;

    template<typename Return, typename... Args>
    class Observer<Return (Args...)>
    {
    public:
        virtual Return update(Args... args) = 0;

        virtual ~Observer() = default;
    };
}

#endif // NAIL_OBSERVER_HPP
/**
 * Copyright (C) 2020-2023 Gaétan Jalin
 *
 * This software is provided 'as-is', without any express or implied
 * warranty.  In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 *    1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 *
 *    2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 *
 *    3. This notice may not be removed or altered from any source distribution.
 **/

