//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"

#include "Unit2.h"
#include<fstream>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;


//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::SingleModeClick(TObject *Sender)
{
        SingleMode->Picture->LoadFromFile("img/HighlightSingleP.bmp");
        MultiMode->Picture->LoadFromFile("img/ButtonMultiP.bmp");
        Form1->mode=1;
        Red_Side->Visible=true;
        Blue_Side->Visible=true;
        Dummy->Visible=true;
        Normal->Visible=true;
        Unbeatable->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::MultiModeClick(TObject *Sender)
{
        MultiMode->Picture->LoadFromFile("img/HighlightMultiP.bmp");
        SingleMode->Picture->LoadFromFile("img/ButtonSingleP.bmp");
        Form1->mode=2;
        Red_Side->Visible=false;
        Blue_Side->Visible=false;
        Dummy->Visible=false;
        Normal->Visible=false;
        Unbeatable->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::To5Click(TObject *Sender)
{
        To5->Picture->LoadFromFile("img/Highlight5Button.bmp");
        To7->Picture->LoadFromFile("img/7Button.bmp");
        To11->Picture->LoadFromFile("img/11Button.bmp");
        Form1->sets=5;
        }
//---------------------------------------------------------------------------

void __fastcall TForm2::To7Click(TObject *Sender)
{
        To7->Picture->LoadFromFile("img/Highlight7Button.bmp");
        To5->Picture->LoadFromFile("img/5Button.bmp");
        To11->Picture->LoadFromFile("img/11Button.bmp");
        Form1->sets=7;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::To11Click(TObject *Sender)
{
        To11->Picture->LoadFromFile("img/Highlight11Button.bmp");
        To7->Picture->LoadFromFile("img/7Button.bmp");
        To5->Picture->LoadFromFile("img/5Button.bmp");
        Form1->sets=11;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::StartButtonClick(TObject *Sender)
{
        if(Form1->sets!=0)
        {
                if((Form1->mode==1&&Form1->p_side!=0)||Form1->mode==2)
                {
                StartButton->Visible=false;
                Form2->Close();
                }
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Blue_SideClick(TObject *Sender)
{
        Blue_Side->Picture->LoadFromFile("img/HighlightBlueP.bmp");
        Red_Side->Picture->LoadFromFile("img/ButtonRedP.bmp");
        Form1->p_side=2;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Red_SideClick(TObject *Sender)
{
        Red_Side->Picture->LoadFromFile("img/HighlightRedP.bmp");
        Blue_Side->Picture->LoadFromFile("img/ButtonBlueP.bmp");
        Form1->p_side=1;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::DummyClick(TObject *Sender)
{
        Dummy->Picture->LoadFromFile("img/HighlightEasy.bmp");
        Normal->Picture->LoadFromFile("img/ButtonMed.bmp");
        Unbeatable->Picture->LoadFromFile("img/ButtonHard.bmp");
        Form1->lvl=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::NormalClick(TObject *Sender)
{
        Normal->Picture->LoadFromFile("img/HighlightMed.bmp");
        Dummy->Picture->LoadFromFile("img/ButtonEasy.bmp");
        Unbeatable->Picture->LoadFromFile("img/ButtonHard.bmp");
        Form1->lvl=1;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::UnbeatableClick(TObject *Sender)
{
        Unbeatable->Picture->LoadFromFile("img/HighlightHard.bmp");
        Dummy->Picture->LoadFromFile("img/ButtonEasy.bmp");
        Normal->Picture->LoadFromFile("img/ButtonMed.bmp");
        Form1->lvl=2;
}
//---------------------------------------------------------------------------

