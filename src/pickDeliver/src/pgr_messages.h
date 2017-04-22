/*PGR-GNU*****************************************************************

FILE: pgr_pickDeliver.h

Copyright (c) 2015 pgRouting developers
Mail: project@pgrouting.org

------

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

 ********************************************************************PGR-GNU*/

#ifndef SRC_PICKDELIVER_SRC_PGR_MESSAGES_H_
#define SRC_PICKDELIVER_SRC_PGR_MESSAGES_H_
#pragma once



#include <string>
#include <sstream>

namespace pgrouting {
namespace vrp {


class Pgr_messages {
 public:
    Pgr_messages() = default;
    Pgr_messages(const Pgr_messages&) { }
    Pgr_messages& operator=(const Pgr_messages&) {
        return *this;
    }

    /*! @brief get_log
     *
     * \returns the current contents of the log and clears the log
     *
     */
    std::string get_log() const;

    /*! @brief get_notice
     *
     * @returns the current contents of the log and clears the log
     *
     */
    std::string get_notice() const;

    /*! @brief get_error
     *
     * @returns the current contents of the log and clears the log
     *
     */
    std::string get_error() const;

    /*! @brief clear
     *
     * Clears All the messages
     *
     */
    void clear();

#ifndef NDEBUG
    /*! @brief get_error
     *
     * @returns the current contents of the log and clears the log
     *
     */
    std::string get_dbglog() const;
#endif



 public:
    /*! Stores the hint information*/
    std::ostringstream log;
    /*! Stores the notice information*/
    std::ostringstream notice;
    /*! Stores the error information*/
    std::ostringstream error;
#ifndef NDEBUG
    mutable std::ostringstream dbg_log;
#endif
};

}  //  namespace vrp
}  //  namespace pgrouting

#endif  // SRC_PICKDELIVER_SRC_PGR_MESSAGES_H_
