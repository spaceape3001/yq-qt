////////////////////////////////////////////////////////////////////////////////
//
//  YOUR QUILL
//
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include <gluon/undo/UndoBase.hpp>
#include <QCheckBox>

namespace yq::gluon {

    /*! \brief Undoable checkbox with boolean value
    
        \note Currently undo is a stub
    */
    class CheckBox : public QCheckBox, public UndoBase {
        Q_OBJECT
    public:
        CheckBox(QWidget* parent=nullptr);
        CheckBox(const QString& text, QWidget* parent=nullptr);
        virtual ~CheckBox();
        
        //  TODO: Currently, the *ACTUAL* undo tie in is not yet implemented

        bool    isChecked() const;
        void    setChecked(bool);
    };

}