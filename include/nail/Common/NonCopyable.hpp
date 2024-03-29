// NonCopyable.hpp
// 6 Jul 2023
// Gaétan "Gad" Jalin
// See end of file for complete license description
#ifndef NAIL_NONCOPYABLE_HPP
#define NAIL_NONCOPYABLE_HPP

namespace nail
{
    class NonCopyable
    {
    public:
        NonCopyable() noexcept = default;

        NonCopyable(NonCopyable const&) = delete;
        NonCopyable& operator=(NonCopyable const&) = delete;

        virtual ~NonCopyable() = default;
    };

    class NonMovable
    {
    public:
        NonMovable() noexcept = default;

        NonMovable(NonMovable&&) = delete;
        NonMovable& operator=(NonMovable&&) = delete;

        virtual ~NonMovable() = default;
    };
}

#endif // NAIL_NONCOPYABLE_HPP
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

