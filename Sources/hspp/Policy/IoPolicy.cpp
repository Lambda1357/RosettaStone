// Copyright (c) 2018 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <hspp/Commons/Utils.hpp>
#include <hspp/Policy/IoPolicy.hpp>

namespace Hearthstonepp
{
IoPolicy::IoPolicy(std::ostream& out, std::istream& in) : m_out(out), m_in(in)
{
    // Do Nothing
}

TaskMeta IoPolicy::RequireMulligan(Player& player)
{
    TaskMetaTrait trait(TaskID::MULLIGAN, TaskStatus::MULLIGAN_SUCCESS,
                        player.GetID());

    return TaskMeta(trait, Box<size_t>(3));
}

}  // namespace Hearthstonepp