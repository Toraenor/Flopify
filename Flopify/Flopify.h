#pragma once
#include "SoundManager.h"

namespace Flopify {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Flopify
	/// </summary>
	public ref class Flopify : public System::Windows::Forms::Form
	{
	public:
		Flopify(void)
		{
			InitializeComponent();

			musicFilePaths = gcnew System::Collections::Generic::List<String^>();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Flopify()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;



	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;



	private: System::Collections::Generic::List<String^>^ musicFilePaths;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::TrackBar^ trackPlayBar;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ playBtn;
	private: System::Windows::Forms::PictureBox^ pauseResumeBtn;
	private: System::Windows::Forms::PictureBox^ stopBtn;
	private: System::Windows::Forms::PictureBox^ volumeIcon;


	private: System::Windows::Forms::FlowLayoutPanel^ selectedPanel;

	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::TrackBar^ volumeBar;
	private: System::Windows::Forms::Label^ label1;

		   bool test = false;





	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Flopify::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->playBtn = (gcnew System::Windows::Forms::PictureBox());
			this->pauseResumeBtn = (gcnew System::Windows::Forms::PictureBox());
			this->stopBtn = (gcnew System::Windows::Forms::PictureBox());
			this->trackPlayBar = (gcnew System::Windows::Forms::TrackBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->volumeIcon = (gcnew System::Windows::Forms::PictureBox());
			this->volumeBar = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playBtn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pauseResumeBtn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stopBtn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackPlayBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->volumeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->volumeBar))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1190, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openToolStripMenuItem,
					this->addToolStripMenuItem, this->saveToolStripMenuItem
			});
			this->menuToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->openToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Flopify::openToolStripMenuItem_Click);
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->addToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->addToolStripMenuItem->Text = L"Add";
			this->addToolStripMenuItem->Click += gcnew System::EventHandler(this, &Flopify::addToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->saveToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Flopify::saveToolStripMenuItem_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->flowLayoutPanel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel1->Location = System::Drawing::Point(166, 40);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(878, 323);
			this->flowLayoutPanel1->TabIndex = 4;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->playBtn);
			this->flowLayoutPanel2->Controls->Add(this->pauseResumeBtn);
			this->flowLayoutPanel2->Controls->Add(this->stopBtn);
			this->flowLayoutPanel2->Location = System::Drawing::Point(527, 383);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Padding = System::Windows::Forms::Padding(3);
			this->flowLayoutPanel2->Size = System::Drawing::Size(181, 59);
			this->flowLayoutPanel2->TabIndex = 5;
			// 
			// playBtn
			// 
			this->playBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playBtn.BackgroundImage")));
			this->playBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->playBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playBtn.Image")));
			this->playBtn->Location = System::Drawing::Point(6, 6);
			this->playBtn->Name = L"playBtn";
			this->playBtn->Size = System::Drawing::Size(43, 45);
			this->playBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->playBtn->TabIndex = 1;
			this->playBtn->TabStop = false;
			this->playBtn->Click += gcnew System::EventHandler(this, &Flopify::Play_Click);
			// 
			// pauseResumeBtn
			// 
			this->pauseResumeBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pauseResumeBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pauseResumeBtn.Image")));
			this->pauseResumeBtn->Location = System::Drawing::Point(55, 6);
			this->pauseResumeBtn->Name = L"pauseResumeBtn";
			this->pauseResumeBtn->Size = System::Drawing::Size(55, 45);
			this->pauseResumeBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pauseResumeBtn->TabIndex = 2;
			this->pauseResumeBtn->TabStop = false;
			this->pauseResumeBtn->Click += gcnew System::EventHandler(this, &Flopify::Pause_Click);
			// 
			// stopBtn
			// 
			this->stopBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->stopBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"stopBtn.Image")));
			this->stopBtn->Location = System::Drawing::Point(116, 6);
			this->stopBtn->Name = L"stopBtn";
			this->stopBtn->Size = System::Drawing::Size(55, 45);
			this->stopBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->stopBtn->TabIndex = 3;
			this->stopBtn->TabStop = false;
			this->stopBtn->Click += gcnew System::EventHandler(this, &Flopify::Stop_Click);
			// 
			// trackPlayBar
			// 
			this->trackPlayBar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->trackPlayBar->Location = System::Drawing::Point(312, 437);
			this->trackPlayBar->Margin = System::Windows::Forms::Padding(0);
			this->trackPlayBar->Maximum = 10000;
			this->trackPlayBar->Name = L"trackPlayBar";
			this->trackPlayBar->Size = System::Drawing::Size(606, 45);
			this->trackPlayBar->TabIndex = 6;
			this->trackPlayBar->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackPlayBar->Scroll += gcnew System::EventHandler(this, &Flopify::trackBar1_Scroll);
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &Flopify::timer1_Tick);
			this->timer1->Start();
			// 
			// volumeIcon
			// 
			this->volumeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"volumeIcon.Image")));
			this->volumeIcon->Location = System::Drawing::Point(1009, 427);
			this->volumeIcon->Name = L"volumeIcon";
			this->volumeIcon->Size = System::Drawing::Size(35, 35);
			this->volumeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->volumeIcon->TabIndex = 7;
			this->volumeIcon->TabStop = false;
			// 
			// volumeBar
			// 
			this->volumeBar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->volumeBar->Location = System::Drawing::Point(1050, 437);
			this->volumeBar->Maximum = 10000;
			this->volumeBar->Name = L"volumeBar";
			this->volumeBar->Size = System::Drawing::Size(104, 45);
			this->volumeBar->TabIndex = 8;
			this->volumeBar->TickStyle = System::Windows::Forms::TickStyle::None;
			this->volumeBar->Value = 8;
			this->volumeBar->Scroll += gcnew System::EventHandler(this, &Flopify::volumeBar_Scroll);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Green;
			this->label1->Location = System::Drawing::Point(4, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 39);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Flopify";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Flopify
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->ClientSize = System::Drawing::Size(1190, 465);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->volumeBar);
			this->Controls->Add(this->volumeIcon);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->trackPlayBar);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Flopify";
			this->Text = L"Flopify";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->flowLayoutPanel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playBtn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pauseResumeBtn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stopBtn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackPlayBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->volumeIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->volumeBar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Play_Click(System::Object^ sender, System::EventArgs^ e)
	{
		PlayMusic();
	}
	private: System::Void PlayMusic()
	{
		if (selectedPanel != nullptr)
		{
			char* unmanagedPath = ConvertStringToCharPointer(selectedPanel->Name);
			ResetBars();

			if (!SoundManager::Instance->Play(selectedPanel->Name))
			{
				System::String^ managedString = gcnew System::String(unmanagedPath);
				MessageBox::Show("couldn't play sound " + managedString);
			}
			pauseResumeBtn->Image = Image::FromFile("pause.png");
			delete[] unmanagedPath;
		}
	}
	private: System::Void Pause_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//pause selected sound
		if (SoundManager::Instance->IsPlaying())
		{
			//pause playing sound
			pauseResumeBtn->Image = Image::FromFile("resume.png");
			SoundManager::Instance->Pause();
		}
		else
		{
			//resume sound
			pauseResumeBtn->Image = Image::FromFile("pause.png");
			SoundManager::Instance->Resume();
		}
	}
	private: System::Void Stop_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pauseResumeBtn->Image = Image::FromFile("pause.png");
		SoundManager::Instance->Stop();
		ResetBars();
	}
	private: System::Void addToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		openFileDialog->Filter = "WAV files (*.wav)|*.wav|OGG files (*.ogg)|*.ogg";
		openFileDialog->Title = "Select a WAV or OGG File";

		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ filePath = openFileDialog->FileName;
			String^ fileName = System::IO::Path::GetFileName(filePath);
			musicFilePaths->Add(filePath);
			CreateMusic(filePath);
		}
	}

	private: void CreateMusic(String^ fileName)
	{
		FlowLayoutPanel^ layoutPanel = gcnew FlowLayoutPanel();
		Label^ label = gcnew Label();
		PictureBox^ pic = gcnew PictureBox();

		pic->Image = Image::FromFile("images.jfif");
		pic->SizeMode = PictureBoxSizeMode::Zoom;
		label->Text = System::IO::Path::GetFileNameWithoutExtension(fileName);
		label->ForeColor = Color::White;
		label->Font = gcnew System::Drawing::Font("Segoe UI", 15.f);
		label->TextAlign = ContentAlignment::MiddleCenter;

		layoutPanel->Name = fileName;
		layoutPanel->Anchor = AnchorStyles::None;
		layoutPanel->BackColor = Color::White;
		layoutPanel->AutoSize = true;
		layoutPanel->BackColor = Color::FromArgb(25, 25, 25);
		layoutPanel->Cursor = Cursors::Hand;

		layoutPanel->Controls->Add(pic);
		layoutPanel->Controls->Add(label);

		// Attach the same MouseDown event to the FlowLayoutPanel and its child controls
		layoutPanel->MouseDown += gcnew MouseEventHandler(this, &Flopify::MusicOnClick);
		pic->MouseDown += gcnew MouseEventHandler(this, &Flopify::MusicOnClick);
		label->MouseDown += gcnew MouseEventHandler(this, &Flopify::MusicOnClick);

		layoutPanel->MouseDoubleClick += gcnew MouseEventHandler(this, &Flopify::PlayMusicDoubleClick);
		pic->MouseDoubleClick += gcnew MouseEventHandler(this, &Flopify::PlayMusicDoubleClick);
		label->MouseDoubleClick += gcnew MouseEventHandler(this, &Flopify::PlayMusicDoubleClick);

		flowLayoutPanel1->Controls->Add(layoutPanel);
	}

	private: System::Void PlayMusicDoubleClick(System::Object^ sender, MouseEventArgs^ e)
	{
		PlayMusic();
	}

	private: System::Void MusicOnClick(System::Object^ sender, MouseEventArgs^ e)
	{
		FlowLayoutPanel^ clickedPanel = nullptr;

		// Check if the sender is a FlowLayoutPanel or a child control
		if (dynamic_cast<FlowLayoutPanel^>(sender) != nullptr)
		{
			// The sender is the FlowLayoutPanel itself
			clickedPanel = dynamic_cast<FlowLayoutPanel^>(sender);
		}
		else if (dynamic_cast<Control^>(sender) != nullptr)
		{
			// The sender is a child control, get its parent
			Control^ childControl = dynamic_cast<Control^>(sender);
			clickedPanel = dynamic_cast<FlowLayoutPanel^>(childControl->Parent);
		}

		if (clickedPanel != nullptr)
		{
			//MessageBox::Show("Clicked FlowLayoutPanel: " + clickedPanel->Name);
			clickedPanel->Select();
			selectedPanel = clickedPanel;
		}
	}
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		openFileDialog->Filter = "TXT Files (*.txt)|*.txt";
		openFileDialog->Title = "Select a TXT File";

		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(openFileDialog->FileName);
			while (!reader->EndOfStream)
			{
				String^ musicName = reader->ReadLine();
				musicFilePaths->Add(musicName);
				CreateMusic(musicName);
			}
			reader->Close();
		}
	}
	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
		saveFileDialog->Filter = "TXT Files (*.txt)|*.txt";
		saveFileDialog->Title = "Select a TXT File";

		if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(saveFileDialog->FileName);
			for each (String ^ musicName in musicFilePaths)
			{
				MessageBox::Show(musicName);
				writer->WriteLine(musicName);
			}
			writer->Close();
		}
	}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e)
	{
		TrackBar^ timeBar = (TrackBar^)sender;
		float currentTime = timeBar->Value;
		float maxValue = timeBar->Maximum;
		float newTime = 0;
		if (maxValue != 0)
		{
			newTime = currentTime / maxValue;
		}
		SoundManager::Instance->ChangeMusicTime(newTime);
		// Seek to the selected position
		//mediaPlayer->Ctlcontrols->currentPosition = trackBar1->Value;
	}

	private: void ResetBars()
	{
		trackPlayBar->Value = 0;
		volumeBar->Value = volumeBar->Maximum;
	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		if (SoundManager::Instance->IsPlaying())
		{
			float currentTime = SoundManager::Instance->GetCurrentMusicTime();
			float totalTime = SoundManager::Instance->GetMusicDuration();
			float percent = currentTime / totalTime;
			int onMax = trackPlayBar->Maximum * percent;
			trackPlayBar->Value = onMax;
		}
	}

	private: char* ConvertStringToCharPointer(String^ string) {

		// Step 2: Use System::Text::Encoding to get a byte array
		array<unsigned char>^ byteArray = System::Text::Encoding::UTF8->GetBytes(string);

		// Step 3: Allocate char* buffer
		char* charPtr = new char[byteArray->Length + 1];

		// Step 4: Copy data to char*
		for (int i = 0; i < byteArray->Length; i++) {
			charPtr[i] = byteArray[i];
		}

		// Null-terminate the char*
		charPtr[byteArray->Length] = '\0';

		return charPtr;
	}

	private: System::Void volumeBar_Scroll(System::Object^ sender, System::EventArgs^ e) 
	{
		TrackBar^ volumebar = (TrackBar^)sender;
		float currentVolume = volumeBar->Value;
		float maxValue = volumeBar->Maximum;
		float newVolume = 0;
		if (maxValue != 0)
		{
			newVolume = currentVolume / maxValue;
		}
		SoundManager::Instance->ChangeVolume(newVolume);
	}
};
}
