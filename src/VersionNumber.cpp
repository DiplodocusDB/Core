/*
    Copyright (c) 2015-2018 Xavier Leclercq

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
    IN THE SOFTWARE.
*/

#include "VersionNumber.h"
#include <sstream>

namespace DiplodocusDB
{

VersionNumber::VersionNumber(unsigned int major,
                             unsigned int minor,
                             unsigned int build)
{
    m_number.push_back(major);
    m_number.push_back(minor);
    m_number.push_back(build);
}

const std::vector<unsigned int>& VersionNumber::value() const
{
    return m_number;
}

std::string VersionNumber::toString() const
{
    std::stringstream result;
    for (size_t i = 0; i < m_number.size(); ++i)
    {
        if (i != 0)
        {
            result << ".";
        }
        result << m_number[i];
    }
    return result.str();
}

}
