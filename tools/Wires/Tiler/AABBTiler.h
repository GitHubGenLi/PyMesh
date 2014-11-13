#pragma once

#include "TilerEngine.h"

class AABBTiler : public TilerEngine {
    public:
        AABBTiler(WireNetwork::Ptr unit_wire_network,
                const VectorF& bbox_min,
                const VectorF& bbox_max,
                const VectorI& repetitions);
        virtual ~AABBTiler() {}

    public:
        virtual WireNetwork::Ptr tile();

    private:
        VectorF m_bbox_min;
        VectorF m_bbox_max;
        VectorI m_repetitions;
};
