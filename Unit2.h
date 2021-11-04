//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TImage *Tlo2;
        TImage *SingleMode;
        TImage *MultiMode;
        TImage *To5;
        TImage *To7;
        TImage *To11;
        TImage *StartButton;
        TImage *Red_Side;
        TImage *Blue_Side;
        TImage *Dummy;
        TImage *Normal;
        TImage *Unbeatable;
        void __fastcall SingleModeClick(TObject *Sender);
        void __fastcall MultiModeClick(TObject *Sender);
        void __fastcall To5Click(TObject *Sender);
        void __fastcall To7Click(TObject *Sender);
        void __fastcall To11Click(TObject *Sender);
        void __fastcall StartButtonClick(TObject *Sender);
        void __fastcall Blue_SideClick(TObject *Sender);
        void __fastcall Red_SideClick(TObject *Sender);
        void __fastcall DummyClick(TObject *Sender);
        void __fastcall NormalClick(TObject *Sender);
        void __fastcall UnbeatableClick(TObject *Sender);
private:	// User declarations
public:	  
          int startB;	// User declarations
        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
