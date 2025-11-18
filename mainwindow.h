#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QString>

/*
 * ===============================
 *  STUDENT MANAGEMENT SYSTEM
 *  Developed by: Abdul Wasiu
 *  Roll No: (K25SW-016)
 *  Description:
 *  This header file defines the
 *  structure and functions for
 *  managing student records.
 * ===============================
 */

// ------------------------------
// Structure to store one student
// ------------------------------
struct Student {
    QString name;
    QString roll;
    QString father;
    QString caste;
    QString district;
    QString gpa;
};

// ------------------------------
// MainWindow Class Declaration
// ------------------------------
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // Slots for button actions
    void onAddClicked();     // Add new record
    void onNextClicked();    // Show next record
    void onUpdateClicked();  // Update existing record
    void onDeleteClicked();  // Delete record

private:
    Ui::MainWindow *ui;

    QVector<Student> students; // All student records
    int currentIndex;          // Current record index

    // Helper functions
    void clearFields();        // Clears all text fields
    bool validateFields();     // Ensures all fields are filled
};

#endif // MAINWINDOW_H
