/********************************************************************************
** Form generated from reading UI file 'add_entry.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_ENTRY_H
#define UI_ADD_ENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add_entry
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QSplitter *splitter_8;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QSplitter *splitter_2;
    QLabel *label_3;
    QDateTimeEdit *dte_time_date;
    QSpacerItem *verticalSpacer_2;
    QSplitter *splitter_7;
    QSplitter *splitter;
    QLabel *label;
    QDoubleSpinBox *dsb_amount;
    QWidget *widget2;
    QGridLayout *gridLayout;
    QSplitter *splitter_3;
    QWidget *widget3;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QComboBox *cb_account;
    QSpacerItem *horizontalSpacer_2;
    QSplitter *splitter_5;
    QLabel *label_2;
    QComboBox *cb_category;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QSplitter *splitter_4;
    QLabel *label_4;
    QComboBox *cb_transaction;
    QSpacerItem *verticalSpacer;
    QSplitter *splitter_6;
    QLabel *label_6;
    QLineEdit *le_info;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Add_entry)
    {
        if (Add_entry->objectName().isEmpty())
            Add_entry->setObjectName(QStringLiteral("Add_entry"));
        Add_entry->resize(400, 275);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Add_entry->sizePolicy().hasHeightForWidth());
        Add_entry->setSizePolicy(sizePolicy);
        Add_entry->setMinimumSize(QSize(400, 275));
        Add_entry->setMaximumSize(QSize(400, 275));
        widget = new QWidget(Add_entry);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 373, 210));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        splitter_8 = new QSplitter(widget);
        splitter_8->setObjectName(QStringLiteral("splitter_8"));
        splitter_8->setOrientation(Qt::Vertical);
        widget1 = new QWidget(splitter_8);
        widget1->setObjectName(QStringLiteral("widget1"));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(widget1);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        label_3 = new QLabel(splitter_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        splitter_2->addWidget(label_3);
        dte_time_date = new QDateTimeEdit(splitter_2);
        dte_time_date->setObjectName(QStringLiteral("dte_time_date"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dte_time_date->sizePolicy().hasHeightForWidth());
        dte_time_date->setSizePolicy(sizePolicy2);
        splitter_2->addWidget(dte_time_date);

        gridLayout_2->addWidget(splitter_2, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 1, 0, 1, 1);

        splitter_7 = new QSplitter(widget1);
        splitter_7->setObjectName(QStringLiteral("splitter_7"));
        splitter_7->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_7);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        label = new QLabel(splitter);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        splitter->addWidget(label);
        dsb_amount = new QDoubleSpinBox(splitter);
        dsb_amount->setObjectName(QStringLiteral("dsb_amount"));
        sizePolicy2.setHeightForWidth(dsb_amount->sizePolicy().hasHeightForWidth());
        dsb_amount->setSizePolicy(sizePolicy2);
        dsb_amount->setContextMenuPolicy(Qt::PreventContextMenu);
        dsb_amount->setToolTipDuration(-1);
        dsb_amount->setMaximum(1e+08);
        splitter->addWidget(dsb_amount);
        splitter_7->addWidget(splitter);
        widget2 = new QWidget(splitter_7);
        widget2->setObjectName(QStringLiteral("widget2"));
        gridLayout = new QGridLayout(widget2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        splitter_3 = new QSplitter(widget2);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        widget3 = new QWidget(splitter_3);
        widget3->setObjectName(QStringLiteral("widget3"));
        gridLayout_3 = new QGridLayout(widget3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget3);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        cb_account = new QComboBox(widget3);
        cb_account->setObjectName(QStringLiteral("cb_account"));
        sizePolicy2.setHeightForWidth(cb_account->sizePolicy().hasHeightForWidth());
        cb_account->setSizePolicy(sizePolicy2);
        cb_account->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(cb_account, 1, 0, 1, 1);

        splitter_3->addWidget(widget3);

        gridLayout->addWidget(splitter_3, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        splitter_5 = new QSplitter(widget2);
        splitter_5->setObjectName(QStringLiteral("splitter_5"));
        splitter_5->setOrientation(Qt::Vertical);
        label_2 = new QLabel(splitter_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        splitter_5->addWidget(label_2);
        cb_category = new QComboBox(splitter_5);
        cb_category->setObjectName(QStringLiteral("cb_category"));
        sizePolicy2.setHeightForWidth(cb_category->sizePolicy().hasHeightForWidth());
        cb_category->setSizePolicy(sizePolicy2);
        splitter_5->addWidget(cb_category);

        gridLayout->addWidget(splitter_5, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);

        splitter_4 = new QSplitter(widget2);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setOrientation(Qt::Vertical);
        label_4 = new QLabel(splitter_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        splitter_4->addWidget(label_4);
        cb_transaction = new QComboBox(splitter_4);
        cb_transaction->setObjectName(QStringLiteral("cb_transaction"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cb_transaction->sizePolicy().hasHeightForWidth());
        cb_transaction->setSizePolicy(sizePolicy3);
        splitter_4->addWidget(cb_transaction);

        gridLayout->addWidget(splitter_4, 0, 5, 1, 1);

        splitter_7->addWidget(widget2);

        gridLayout_2->addWidget(splitter_7, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 1);

        splitter_6 = new QSplitter(widget1);
        splitter_6->setObjectName(QStringLiteral("splitter_6"));
        splitter_6->setOrientation(Qt::Vertical);
        label_6 = new QLabel(splitter_6);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        splitter_6->addWidget(label_6);
        le_info = new QLineEdit(splitter_6);
        le_info->setObjectName(QStringLiteral("le_info"));
        sizePolicy2.setHeightForWidth(le_info->sizePolicy().hasHeightForWidth());
        le_info->setSizePolicy(sizePolicy2);
        splitter_6->addWidget(le_info);

        gridLayout_2->addWidget(splitter_6, 4, 0, 1, 1);

        splitter_8->addWidget(widget1);

        gridLayout_4->addWidget(splitter_8, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(Add_entry);
        QObject::connect(buttonBox, SIGNAL(accepted()), Add_entry, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Add_entry, SLOT(reject()));

        QMetaObject::connectSlotsByName(Add_entry);
    } // setupUi

    void retranslateUi(QDialog *Add_entry)
    {
        Add_entry->setWindowTitle(QApplication::translate("Add_entry", "Dialog", 0));
        label_3->setText(QApplication::translate("Add_entry", "Time and Date", 0));
        label->setText(QApplication::translate("Add_entry", "Amount", 0));
        label_5->setText(QApplication::translate("Add_entry", "Account", 0));
        label_2->setText(QApplication::translate("Add_entry", "Category", 0));
        label_4->setText(QApplication::translate("Add_entry", "Transaction", 0));
        label_6->setText(QApplication::translate("Add_entry", "Information on Transaction", 0));
    } // retranslateUi

};

namespace Ui {
    class Add_entry: public Ui_Add_entry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_ENTRY_H
