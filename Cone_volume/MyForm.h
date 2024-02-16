#pragma once

namespace Conevolume {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::Label^ labelR;


	private: System::Windows::Forms::Label^ labelh;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Label^ labelS;
	private: System::Windows::Forms::Label^ labelV;
	private: System::Windows::Forms::Button^ btResult;
	private: System::Windows::Forms::Button^ butClear;
	private: System::Windows::Forms::MaskedTextBox^ mTextBox1;
	private: System::Windows::Forms::MaskedTextBox^ mTextBox2;

	private: System::ComponentModel::IContainer^ components;
	protected:
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->labelR = (gcnew System::Windows::Forms::Label());
			this->labelh = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->labelS = (gcnew System::Windows::Forms::Label());
			this->labelV = (gcnew System::Windows::Forms::Label());
			this->btResult = (gcnew System::Windows::Forms::Button());
			this->butClear = (gcnew System::Windows::Forms::Button());
			this->mTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->mTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(338, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(434, 437);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->UseWaitCursor = true;
			// 
			// labelR
			// 
			this->labelR->AutoSize = true;
			this->labelR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelR->Location = System::Drawing::Point(21, 40);
			this->labelR->Name = L"labelR";
			this->labelR->Size = System::Drawing::Size(80, 24);
			this->labelR->TabIndex = 2;
			this->labelR->Text = L"Радиус";
			this->labelR->UseWaitCursor = true;
			// 
			// labelh
			// 
			this->labelh->AutoSize = true;
			this->labelh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelh->Location = System::Drawing::Point(21, 110);
			this->labelh->Name = L"labelh";
			this->labelh->Size = System::Drawing::Size(82, 24);
			this->labelh->TabIndex = 4;
			this->labelh->Text = L"Высота";
			this->labelh->UseWaitCursor = true;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// labelS
			// 
			this->labelS->AutoSize = true;
			this->labelS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelS->ForeColor = System::Drawing::Color::Maroon;
			this->labelS->Location = System::Drawing::Point(21, 181);
			this->labelS->Name = L"labelS";
			this->labelS->Size = System::Drawing::Size(35, 24);
			this->labelS->TabIndex = 5;
			this->labelS->Text = L"S=";
			this->labelS->UseWaitCursor = true;
			// 
			// labelV
			// 
			this->labelV->AutoSize = true;
			this->labelV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelV->ForeColor = System::Drawing::Color::Fuchsia;
			this->labelV->Location = System::Drawing::Point(21, 243);
			this->labelV->Name = L"labelV";
			this->labelV->Size = System::Drawing::Size(36, 24);
			this->labelV->TabIndex = 6;
			this->labelV->Text = L"V=";
			this->labelV->UseWaitCursor = true;
			// 
			// btResult
			// 
			this->btResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btResult->Location = System::Drawing::Point(25, 296);
			this->btResult->Name = L"btResult";
			this->btResult->Size = System::Drawing::Size(267, 66);
			this->btResult->TabIndex = 7;
			this->btResult->Text = L"Вычеслить";
			this->btResult->UseVisualStyleBackColor = true;
			this->btResult->UseWaitCursor = true;
			this->btResult->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// butClear
			// 
			this->butClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butClear->Location = System::Drawing::Point(25, 383);
			this->butClear->Name = L"butClear";
			this->butClear->Size = System::Drawing::Size(267, 66);
			this->butClear->TabIndex = 8;
			this->butClear->Text = L"Стереть";
			this->butClear->UseVisualStyleBackColor = true;
			this->butClear->UseWaitCursor = true;
			this->butClear->Click += gcnew System::EventHandler(this, &MyForm::butClear_Click);
			// 
			// mTextBox1
			// 
			this->mTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mTextBox1->Location = System::Drawing::Point(131, 40);
			this->mTextBox1->Mask = L"0000000000000000";
			this->mTextBox1->Name = L"mTextBox1";
			this->mTextBox1->Size = System::Drawing::Size(185, 29);
			this->mTextBox1->TabIndex = 9;
			this->mTextBox1->UseWaitCursor = true;
			this->mTextBox1->ValidatingType = System::Int32::typeid;
			this->mTextBox1->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &MyForm::mTextBox1_MaskInputRejected);
			// 
			// mTextBox2
			// 
			this->mTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mTextBox2->Location = System::Drawing::Point(131, 105);
			this->mTextBox2->Mask = L"0000000000000000";
			this->mTextBox2->Name = L"mTextBox2";
			this->mTextBox2->Size = System::Drawing::Size(185, 29);
			this->mTextBox2->TabIndex = 10;
			this->mTextBox2->UseWaitCursor = true;
			this->mTextBox2->ValidatingType = System::Int32::typeid;
			this->mTextBox2->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &MyForm::mTextBox2_MaskInputRejected);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->mTextBox2);
			this->Controls->Add(this->mTextBox1);
			this->Controls->Add(this->butClear);
			this->Controls->Add(this->btResult);
			this->Controls->Add(this->labelV);
			this->Controls->Add(this->labelS);
			this->Controls->Add(this->labelh);
			this->Controls->Add(this->labelR);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(800, 500);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Объем конуса по радиусу основания и высоте.";
			this->UseWaitCursor = true;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	//кнопка результата, дествие
	private: System::Void button1_Click(System::Object^ sender, EventArgs^ e) 
	{

			float  s, p, r, v, h, a;
			a = 0.33, r = 0, s = 0, p = 3.14, v = 0, h = 0;
			//перевод из строчного в числовое значение
			//добавлено поле mTextBox1(MaskedTextBox) принимает только цифры
			r = r.Parse(this->mTextBox1->Text);
			h = h.Parse(this->mTextBox2->Text);

			//ошибка на минусовое значение
			if (r <= 0 || h <= 0) labelV->Text = "Ведити число больше 0 число";
			else if (r > 0 && h > 0)
			{
				// расчеты по формуле
				s = p * (r * r);
				v = a * s * h;
				//перевод из числового в строчное значение
				labelS->Text = "S =" + s.ToString();
				labelV->Text = "V =" + v.ToString();
			}
			
		
	}

	private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
	{
		//подтверждение выйти или нет из программы.
		if (MessageBox::Show("Выйти из программы ?",
			"Сообщение", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No)
		{
			e->Cancel = true;
		}
	}
	//кнопка очистки заполненных полей
	private: System::Void butClear_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		mTextBox1->Text = "";
		mTextBox2->Text = "";
		labelS->Text = "S=";
		labelV->Text = "V=";
	}
//выводит ошибку если вводить не цифру в поле mTextBox1, mTextBox2
private: System::Void mTextBox1_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) 
{
	labelV->Text = "Введено неправильное\n значение радиус";
}
private: System::Void mTextBox2_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) 
{
	labelV->Text = "Введено неправильное\n значение высота";
}
};
}
	





