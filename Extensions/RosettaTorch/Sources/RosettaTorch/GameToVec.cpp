// Copyright (c) 2018 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <RosettaTorch/GameToVec.hpp>

namespace RosettaTorch
{
torch::Tensor GameToVec::GenerateTensor(const Game& game)
{
    (void)game;
    return torch::Tensor();
}
}  // namespace RosettaTorch