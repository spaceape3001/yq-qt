////////////////////////////////////////////////////////////////////////////////
//
//  YOUR QUILL's QT UTILITIES
//
////////////////////////////////////////////////////////////////////////////////

#pragma once

class QUndoCommand;

namespace qu {

    /*! \brief Simple callback for an undo interface */
    struct UndoCallback {
        virtual void    pushUndo(QUndoCommand*) = 0;
    };

}
