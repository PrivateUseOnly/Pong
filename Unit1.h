//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *Court;
        TImage *Judge;
        TImage *Red_Player;
        TImage *Blue_Player;
        TImage *Ball;
        TImage *Point_Red;
        TImage *Point_Blue;
        TImage *RedScoreBG1;
        TTimer *T_Blue_Down;
        TTimer *T_Blue_Up;
        TTimer *TJudge;
        TTimer *T_Ball;
        TTimer *T_Red_Down;
        TTimer *T_Red_Up;
        TImage *BlueScoreBG1;
        TLabel *BlueScore;
        TLabel *RedScore;
        TTimer *TBallTurn;
        TTimer *BounceSleep;
        TImage *Serv_Blue;
        TImage *Serv_Red;
        TTimer *TPoint;
        TTimer *T_Serv;
        TButton *Button1;
        TButton *Reset;
        void __fastcall T_BallTimer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall T_Blue_UpTimer(TObject *Sender);
        void __fastcall T_Blue_DownTimer(TObject *Sender);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall T_Red_DownTimer(TObject *Sender);
        void __fastcall T_Red_UpTimer(TObject *Sender);
        void __fastcall TBallTurnTimer(TObject *Sender);
        void __fastcall BounceSleepTimer(TObject *Sender);
        void __fastcall T_ServTimer(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:
        int mode;
        int sets;
        int startB;
        int p_side;
        int lvl; // User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
