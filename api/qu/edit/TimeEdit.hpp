////////////////////////////////////////////////////////////////////////////////
//
//  YOUR QUILL's QT UTILITIES
//
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include <qu/undo/UndoBase.hpp>
#include <QTimeEdit>

namespace qu {

    /*! \brief Time Edit with UNDO
    
        \note This is a stub... the actual undo will come later
    */
    class TimeEdit : public QTimeEdit, public UndoBase {
        Q_OBJECT
    public:
        TimeEdit(QWidget* parent = nullptr);
        ~TimeEdit();
        //  TODO: Currently, the *ACTUAL* undo tie in is not yet implemented
    };
}
