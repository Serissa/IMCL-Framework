// Machine generated IDispatch wrapper class(es) created with ClassWizard
/////////////////////////////////////////////////////////////////////////////
// _Application wrapper class

class _Application : public COleDispatchDriver
{
public:
	_Application() {}		// Calls COleDispatchDriver default constructor
	_Application(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Application(const _Application& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	CString GetName();
	LPDISPATCH GetDocuments();
	LPDISPATCH GetWindows();
	LPDISPATCH GetActiveDocument();
	LPDISPATCH GetActiveWindow();
	LPDISPATCH GetSelection();
	LPDISPATCH GetWordBasic();
	LPDISPATCH GetRecentFiles();
	LPDISPATCH GetNormalTemplate();
	LPDISPATCH GetSystem();
	LPDISPATCH GetAutoCorrect();
	LPDISPATCH GetFontNames();
	LPDISPATCH GetLandscapeFontNames();
	LPDISPATCH GetPortraitFontNames();
	LPDISPATCH GetLanguages();
	LPDISPATCH GetAssistant();
	LPDISPATCH GetBrowser();
	LPDISPATCH GetFileConverters();
	LPDISPATCH GetMailingLabel();
	LPDISPATCH GetDialogs();
	LPDISPATCH GetCaptionLabels();
	LPDISPATCH GetAutoCaptions();
	LPDISPATCH GetAddIns();
	int GetVisible();
	void SetVisible(int bNewValue);
	CString GetVersion();
	int GetScreenUpdating();
	void SetScreenUpdating(int bNewValue);
	int GetPrintPreview();
	void SetPrintPreview(int bNewValue);
	LPDISPATCH GetTasks();
	int GetDisplayStatusBar();
	void SetDisplayStatusBar(int bNewValue);
	int GetSpecialMode();
	long GetUsableWidth();
	long GetUsableHeight();
	int GetMathCoprocessorAvailable();
	int GetMouseAvailable();
	VARIANT GetInternational(long Index);
	CString GetBuild();
	int GetCapsLock();
	int GetNumLock();
	CString GetUserName_();
	void SetUserName(LPCTSTR lpszNewValue);
	CString GetUserInitials();
	void SetUserInitials(LPCTSTR lpszNewValue);
	CString GetUserAddress();
	void SetUserAddress(LPCTSTR lpszNewValue);
	LPDISPATCH GetMacroContainer();
	int GetDisplayRecentFiles();
	void SetDisplayRecentFiles(int bNewValue);
	LPDISPATCH GetCommandBars();
	LPDISPATCH GetSynonymInfo(LPCTSTR Word, VARIANT* LanguageID);
	LPDISPATCH GetVbe();
	CString GetDefaultSaveFormat();
	void SetDefaultSaveFormat(LPCTSTR lpszNewValue);
	LPDISPATCH GetListGalleries();
	CString GetActivePrinter();
	void SetActivePrinter(LPCTSTR lpszNewValue);
	LPDISPATCH GetTemplates();
	LPDISPATCH GetCustomizationContext();
	void SetCustomizationContext(LPDISPATCH newValue);
	LPDISPATCH GetKeyBindings();
	LPDISPATCH GetKeysBoundTo(long KeyCategory, LPCTSTR Command, VARIANT* CommandParameter);
	LPDISPATCH GetFindKey(long KeyCode, VARIANT* KeyCode2);
	CString GetCaption();
	void SetCaption(LPCTSTR lpszNewValue);
	CString GetPath();
	int GetDisplayScrollBars();
	void SetDisplayScrollBars(int bNewValue);
	CString GetStartupPath();
	void SetStartupPath(LPCTSTR lpszNewValue);
	long GetBackgroundSavingStatus();
	long GetBackgroundPrintingStatus();
	long GetLeft();
	void SetLeft(long nNewValue);
	long GetTop();
	void SetTop(long nNewValue);
	long GetWidth();
	void SetWidth(long nNewValue);
	long GetHeight();
	void SetHeight(long nNewValue);
	long GetWindowState();
	void SetWindowState(long nNewValue);
	int GetDisplayAutoCompleteTips();
	void SetDisplayAutoCompleteTips(int bNewValue);
	LPDISPATCH GetOptions();
	long GetDisplayAlerts();
	void SetDisplayAlerts(long nNewValue);
	LPDISPATCH GetCustomDictionaries();
	CString GetPathSeparator();
	void SetStatusBar(LPCTSTR lpszNewValue);
	int GetMAPIAvailable();
	int GetDisplayScreenTips();
	void SetDisplayScreenTips(int bNewValue);
	long GetEnableCancelKey();
	void SetEnableCancelKey(long nNewValue);
	int GetUserControl();
	LPDISPATCH GetFileSearch();
	long GetMailSystem();
	CString GetDefaultTableSeparator();
	void SetDefaultTableSeparator(LPCTSTR lpszNewValue);
	int GetShowVisualBasicEditor();
	void SetShowVisualBasicEditor(int bNewValue);
	CString GetBrowseExtraFileTypes();
	void SetBrowseExtraFileTypes(LPCTSTR lpszNewValue);
	int GetIsObjectValid(LPDISPATCH Object);
	LPDISPATCH GetHangulHanjaDictionaries();
	LPDISPATCH GetMailMessage();
	int GetFocusInMailHeader();
	void Quit(VARIANT* SaveChanges, VARIANT* OriginalFormat, VARIANT* RouteDocument);
	void ScreenRefresh();
	void LookupNameProperties(LPCTSTR Name);
	void SubstituteFont(LPCTSTR UnavailableFont, LPCTSTR SubstituteFont);
	int Repeat(VARIANT* Times);
	void DDEExecute(long Channel, LPCTSTR Command);
	long DDEInitiate(LPCTSTR App, LPCTSTR Topic);
	void DDEPoke(long Channel, LPCTSTR Item, LPCTSTR Data);
	CString DDERequest(long Channel, LPCTSTR Item);
	void DDETerminate(long Channel);
	void DDETerminateAll();
	long BuildKeyCode(long Arg1, VARIANT* Arg2, VARIANT* Arg3, VARIANT* Arg4);
	CString KeyString(long KeyCode, VARIANT* KeyCode2);
	void OrganizerCopy(LPCTSTR Source, LPCTSTR Destination, LPCTSTR Name, long Object);
	void OrganizerDelete(LPCTSTR Source, LPCTSTR Name, long Object);
	void OrganizerRename(LPCTSTR Source, LPCTSTR Name, LPCTSTR NewName, long Object);
	// method 'AddAddress' not emitted because of invalid return type or parameter type
	CString GetAddress(VARIANT* Name, VARIANT* AddressProperties, VARIANT* UseAutoText, VARIANT* DisplaySelectDialog, VARIANT* SelectDialog, VARIANT* CheckNamesDialog, VARIANT* RecentAddressesChoice, VARIANT* UpdateRecentAddresses);
	int CheckGrammar(LPCTSTR String);
	int CheckSpelling(LPCTSTR Word, VARIANT* CustomDictionary, VARIANT* IgnoreUppercase, VARIANT* MainDictionary, VARIANT* CustomDictionary2, VARIANT* CustomDictionary3, VARIANT* CustomDictionary4, VARIANT* CustomDictionary5, 
		VARIANT* CustomDictionary6, VARIANT* CustomDictionary7, VARIANT* CustomDictionary8, VARIANT* CustomDictionary9, VARIANT* CustomDictionary10);
	void ResetIgnoreAll();
	LPDISPATCH GetSpellingSuggestions(LPCTSTR Word, VARIANT* CustomDictionary, VARIANT* IgnoreUppercase, VARIANT* MainDictionary, VARIANT* SuggestionMode, VARIANT* CustomDictionary2, VARIANT* CustomDictionary3, VARIANT* CustomDictionary4, 
		VARIANT* CustomDictionary5, VARIANT* CustomDictionary6, VARIANT* CustomDictionary7, VARIANT* CustomDictionary8, VARIANT* CustomDictionary9, VARIANT* CustomDictionary10);
	void GoBack();
	void Help(VARIANT* HelpType);
	void AutomaticChange();
	void ShowMe();
	void HelpTool();
	LPDISPATCH NewWindow();
	void ListCommands(int ListAllCommands);
	void ShowClipboard();
	void OnTime(VARIANT* When, LPCTSTR Name, VARIANT* Tolerance);
	void NextLetter();
	short MountVolume(LPCTSTR Zone, LPCTSTR Server, LPCTSTR Volume, VARIANT* User, VARIANT* UserPassword, VARIANT* VolumePassword);
	CString CleanString(LPCTSTR String);
	void SendFax();
	void ChangeFileOpenDirectory(LPCTSTR Path);
	void GoForward();
	void Move(long Left, long Top);
	void Resize(long Width, long Height);
	float InchesToPoints(float Inches);
	float CentimetersToPoints(float Centimeters);
	float MillimetersToPoints(float Millimeters);
	float PicasToPoints(float Picas);
	float LinesToPoints(float Lines);
	float PointsToInches(float Points);
	float PointsToCentimeters(float Points);
	float PointsToMillimeters(float Points);
	float PointsToPicas(float Points);
	float PointsToLines(float Points);
	void Activate();
	float PointsToPixels(float Points, VARIANT* fVertical);
	float PixelsToPoints(float Pixels, VARIANT* fVertical);
	void KeyboardLatin();
	void KeyboardBidi();
	void ToggleKeyboard();
	long Keyboard(long LangId);
	CString ProductCode();
	LPDISPATCH DefaultWebOptions();
	void SetDefaultTheme(LPCTSTR Name, long DocumentType);
	CString GetDefaultTheme(long DocumentType);
	LPDISPATCH GetEmailOptions();
	long GetLanguage();
	LPDISPATCH GetCOMAddIns();
	int GetCheckLanguage();
	void SetCheckLanguage(int bNewValue);
	LPDISPATCH GetLanguageSettings();
	LPDISPATCH GetAnswerWizard();
	long GetFeatureInstall();
	void SetFeatureInstall(long nNewValue);
	VARIANT Run(LPCTSTR MacroName, VARIANT* varg1, VARIANT* varg2, VARIANT* varg3, VARIANT* varg4, VARIANT* varg5, VARIANT* varg6, VARIANT* varg7, VARIANT* varg8, VARIANT* varg9, VARIANT* varg10, VARIANT* varg11, VARIANT* varg12, VARIANT* varg13, 
		VARIANT* varg14, VARIANT* varg15, VARIANT* varg16, VARIANT* varg17, VARIANT* varg18, VARIANT* varg19, VARIANT* varg20, VARIANT* varg21, VARIANT* varg22, VARIANT* varg23, VARIANT* varg24, VARIANT* varg25, VARIANT* varg26, VARIANT* varg27, 
		VARIANT* varg28, VARIANT* varg29, VARIANT* varg30);
	void PrintOut(VARIANT* Background, VARIANT* Append, VARIANT* Range, VARIANT* OutputFileName, VARIANT* From, VARIANT* To, VARIANT* Item, VARIANT* Copies, VARIANT* Pages, VARIANT* PageType, VARIANT* PrintToFile, VARIANT* Collate, 
		VARIANT* FileName, VARIANT* ActivePrinterMacGX, VARIANT* ManualDuplexPrint, VARIANT* PrintZoomColumn, VARIANT* PrintZoomRow, VARIANT* PrintZoomPaperWidth, VARIANT* PrintZoomPaperHeight);
	long GetAutomationSecurity();
	void SetAutomationSecurity(long nNewValue);
	LPDISPATCH GetFileDialog(long FileDialogType);
	CString GetEmailTemplate();
	void SetEmailTemplate(LPCTSTR lpszNewValue);
	int GetShowWindowsInTaskbar();
	void SetShowWindowsInTaskbar(int bNewValue);
	LPDISPATCH GetNewDocument();
	int GetShowStartupDialog();
	void SetShowStartupDialog(int bNewValue);
	LPDISPATCH GetAutoCorrectEmail();
	LPDISPATCH GetTaskPanes();
	int GetDefaultLegalBlackline();
	void SetDefaultLegalBlackline(int bNewValue);
	LPDISPATCH GetSmartTagRecognizers();
	LPDISPATCH GetSmartTagTypes();
	LPDISPATCH GetXMLNamespaces();
	void PutFocusInMailHeader();
	int GetArbitraryXMLSupportAvailable();
};
/////////////////////////////////////////////////////////////////////////////
// Documents wrapper class

class Documents : public COleDispatchDriver
{
public:
	Documents() {}		// Calls COleDispatchDriver default constructor
	Documents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Documents(const Documents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH Item(VARIANT* Index);
	void Close(VARIANT* SaveChanges, VARIANT* OriginalFormat, VARIANT* RouteDocument);
	void Save(VARIANT* NoPrompt, VARIANT* OriginalFormat);
	LPDISPATCH Add(VARIANT* Template, VARIANT* NewTemplate, VARIANT* DocumentType, VARIANT* Visible);
	void CheckOut(LPCTSTR FileName);
	int CanCheckOut(LPCTSTR FileName);
	LPDISPATCH Open(VARIANT* FileName, VARIANT* ConfirmConversions, VARIANT* ReadOnly, VARIANT* AddToRecentFiles, VARIANT* PasswordDocument, VARIANT* PasswordTemplate, VARIANT* Revert, VARIANT* WritePasswordDocument, 
		VARIANT* WritePasswordTemplate, VARIANT* Format, VARIANT* Encoding, VARIANT* Visible, VARIANT* OpenAndRepair, VARIANT* DocumentDirection, VARIANT* NoEncodingDialog, VARIANT* XMLTransform);
};
/////////////////////////////////////////////////////////////////////////////
// _Document wrapper class

class _Document : public COleDispatchDriver
{
public:
	_Document() {}		// Calls COleDispatchDriver default constructor
	_Document(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Document(const _Document& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetName();
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetBuiltInDocumentProperties();
	LPDISPATCH GetCustomDocumentProperties();
	CString GetPath();
	LPDISPATCH GetBookmarks();
	LPDISPATCH GetTables();
	LPDISPATCH GetFootnotes();
	LPDISPATCH GetEndnotes();
	LPDISPATCH GetComments();
	long GetType();
	int GetAutoHyphenation();
	void SetAutoHyphenation(int bNewValue);
	int GetHyphenateCaps();
	void SetHyphenateCaps(int bNewValue);
	long GetHyphenationZone();
	void SetHyphenationZone(long nNewValue);
	long GetConsecutiveHyphensLimit();
	void SetConsecutiveHyphensLimit(long nNewValue);
	LPDISPATCH GetSections();
	LPDISPATCH GetParagraphs();
	LPDISPATCH GetWords();
	LPDISPATCH GetSentences();
	LPDISPATCH GetCharacters();
	LPDISPATCH GetFields();
	LPDISPATCH GetFormFields();
	LPDISPATCH GetStyles();
	LPDISPATCH GetFrames();
	LPDISPATCH GetTablesOfFigures();
	LPDISPATCH GetVariables();
	LPDISPATCH GetMailMerge();
	LPDISPATCH GetEnvelope();
	CString GetFullName();
	LPDISPATCH GetRevisions();
	LPDISPATCH GetTablesOfContents();
	LPDISPATCH GetTablesOfAuthorities();
	LPDISPATCH GetPageSetup();
	void SetPageSetup(LPDISPATCH newValue);
	LPDISPATCH GetWindows();
	int GetHasRoutingSlip();
	void SetHasRoutingSlip(int bNewValue);
	LPDISPATCH GetRoutingSlip();
	int GetRouted();
	LPDISPATCH GetTablesOfAuthoritiesCategories();
	LPDISPATCH GetIndexes();
	int GetSaved();
	void SetSaved(int bNewValue);
	LPDISPATCH GetContent();
	LPDISPATCH GetActiveWindow();
	long GetKind();
	void SetKind(long nNewValue);
	int GetReadOnly();
	LPDISPATCH GetSubdocuments();
	int GetIsMasterDocument();
	float GetDefaultTabStop();
	void SetDefaultTabStop(float newValue);
	int GetEmbedTrueTypeFonts();
	void SetEmbedTrueTypeFonts(int bNewValue);
	int GetSaveFormsData();
	void SetSaveFormsData(int bNewValue);
	int GetReadOnlyRecommended();
	void SetReadOnlyRecommended(int bNewValue);
	int GetSaveSubsetFonts();
	void SetSaveSubsetFonts(int bNewValue);
	int GetCompatibility(long Type);
	void SetCompatibility(long Type, int bNewValue);
	LPDISPATCH GetStoryRanges();
	LPDISPATCH GetCommandBars();
	int GetIsSubdocument();
	long GetSaveFormat();
	long GetProtectionType();
	LPDISPATCH GetHyperlinks();
	LPDISPATCH GetShapes();
	LPDISPATCH GetListTemplates();
	LPDISPATCH GetLists();
	int GetUpdateStylesOnOpen();
	void SetUpdateStylesOnOpen(int bNewValue);
	VARIANT GetAttachedTemplate();
	void SetAttachedTemplate(VARIANT* newValue);
	LPDISPATCH GetInlineShapes();
	LPDISPATCH GetBackground();
	void SetBackground(LPDISPATCH newValue);
	int GetGrammarChecked();
	void SetGrammarChecked(int bNewValue);
	int GetSpellingChecked();
	void SetSpellingChecked(int bNewValue);
	int GetShowGrammaticalErrors();
	void SetShowGrammaticalErrors(int bNewValue);
	int GetShowSpellingErrors();
	void SetShowSpellingErrors(int bNewValue);
	LPDISPATCH GetVersions();
	int GetShowSummary();
	void SetShowSummary(int bNewValue);
	long GetSummaryViewMode();
	void SetSummaryViewMode(long nNewValue);
	long GetSummaryLength();
	void SetSummaryLength(long nNewValue);
	int GetPrintFractionalWidths();
	void SetPrintFractionalWidths(int bNewValue);
	int GetPrintPostScriptOverText();
	void SetPrintPostScriptOverText(int bNewValue);
	LPDISPATCH GetContainer();
	int GetPrintFormsData();
	void SetPrintFormsData(int bNewValue);
	LPDISPATCH GetListParagraphs();
	void SetPassword(LPCTSTR lpszNewValue);
	void SetWritePassword(LPCTSTR lpszNewValue);
	int GetHasPassword();
	int GetWriteReserved();
	CString GetActiveWritingStyle(VARIANT* LanguageID);
	void SetActiveWritingStyle(VARIANT* LanguageID, LPCTSTR lpszNewValue);
	int GetUserControl();
	void SetUserControl(int bNewValue);
	int GetHasMailer();
	void SetHasMailer(int bNewValue);
	LPDISPATCH GetMailer();
	LPDISPATCH GetReadabilityStatistics();
	LPDISPATCH GetGrammaticalErrors();
	LPDISPATCH GetSpellingErrors();
	LPDISPATCH GetVBProject();
	int GetFormsDesign();
	CString Get_CodeName();
	void Set_CodeName(LPCTSTR lpszNewValue);
	CString GetCodeName();
	int GetSnapToGrid();
	void SetSnapToGrid(int bNewValue);
	int GetSnapToShapes();
	void SetSnapToShapes(int bNewValue);
	float GetGridDistanceHorizontal();
	void SetGridDistanceHorizontal(float newValue);
	float GetGridDistanceVertical();
	void SetGridDistanceVertical(float newValue);
	float GetGridOriginHorizontal();
	void SetGridOriginHorizontal(float newValue);
	float GetGridOriginVertical();
	void SetGridOriginVertical(float newValue);
	long GetGridSpaceBetweenHorizontalLines();
	void SetGridSpaceBetweenHorizontalLines(long nNewValue);
	long GetGridSpaceBetweenVerticalLines();
	void SetGridSpaceBetweenVerticalLines(long nNewValue);
	int GetGridOriginFromMargin();
	void SetGridOriginFromMargin(int bNewValue);
	int GetKerningByAlgorithm();
	void SetKerningByAlgorithm(int bNewValue);
	long GetJustificationMode();
	void SetJustificationMode(long nNewValue);
	long GetFarEastLineBreakLevel();
	void SetFarEastLineBreakLevel(long nNewValue);
	CString GetNoLineBreakBefore();
	void SetNoLineBreakBefore(LPCTSTR lpszNewValue);
	CString GetNoLineBreakAfter();
	void SetNoLineBreakAfter(LPCTSTR lpszNewValue);
	int GetTrackRevisions();
	void SetTrackRevisions(int bNewValue);
	int GetPrintRevisions();
	void SetPrintRevisions(int bNewValue);
	int GetShowRevisions();
	void SetShowRevisions(int bNewValue);
	void Close(VARIANT* SaveChanges, VARIANT* OriginalFormat, VARIANT* RouteDocument);
	void Repaginate();
	void FitToPages();
	void ManualHyphenation();
	void Select();
	void DataForm();
	void Route();
	void Save();
	void SendMail();
	LPDISPATCH Range(VARIANT* Start, VARIANT* End);
	void RunAutoMacro(long Which);
	void Activate();
	void PrintPreview();
	LPDISPATCH GoTo(VARIANT* What, VARIANT* Which, VARIANT* Count, VARIANT* Name);
	int Undo(VARIANT* Times);
	int Redo(VARIANT* Times);
	long ComputeStatistics(long Statistic, VARIANT* IncludeFootnotesAndEndnotes);
	void MakeCompatibilityDefault();
	void Unprotect(VARIANT* Password);
	void EditionOptions(long Type, long Option, LPCTSTR Name, VARIANT* Format);
	void RunLetterWizard(VARIANT* LetterContent, VARIANT* WizardMode);
	LPDISPATCH GetLetterContent();
	void SetLetterContent(VARIANT* LetterContent);
	void CopyStylesFromTemplate(LPCTSTR Template);
	void UpdateStyles();
	void CheckGrammar();
	void CheckSpelling(VARIANT* CustomDictionary, VARIANT* IgnoreUppercase, VARIANT* AlwaysSuggest, VARIANT* CustomDictionary2, VARIANT* CustomDictionary3, VARIANT* CustomDictionary4, VARIANT* CustomDictionary5, VARIANT* CustomDictionary6, 
		VARIANT* CustomDictionary7, VARIANT* CustomDictionary8, VARIANT* CustomDictionary9, VARIANT* CustomDictionary10);
	void FollowHyperlink(VARIANT* Address, VARIANT* SubAddress, VARIANT* NewWindow, VARIANT* AddHistory, VARIANT* ExtraInfo, VARIANT* Method, VARIANT* HeaderInfo);
	void AddToFavorites();
	void Reload();
	LPDISPATCH AutoSummarize(VARIANT* Length, VARIANT* Mode, VARIANT* UpdateProperties);
	void RemoveNumbers(VARIANT* NumberType);
	void ConvertNumbersToText(VARIANT* NumberType);
	long CountNumberedItems(VARIANT* NumberType, VARIANT* Level);
	void Post();
	void ToggleFormsDesign();
	void UpdateSummaryProperties();
	VARIANT GetCrossReferenceItems(VARIANT* ReferenceType);
	void AutoFormat();
	void ViewCode();
	void ViewPropertyBrowser();
	void ForwardMailer();
	void Reply();
	void ReplyAll();
	void SendMailer(VARIANT* FileFormat, VARIANT* Priority);
	void UndoClear();
	void PresentIt();
	void SendFax(LPCTSTR Address, VARIANT* Subject);
	void ClosePrintPreview();
	void CheckConsistency();
	LPDISPATCH CreateLetterContent(LPCTSTR DateFormat, int IncludeHeaderFooter, LPCTSTR PageDesign, long LetterStyle, int Letterhead, long LetterheadLocation, float LetterheadSize, LPCTSTR RecipientName, LPCTSTR RecipientAddress, 
		LPCTSTR Salutation, long SalutationType, LPCTSTR RecipientReference, LPCTSTR MailingInstructions, LPCTSTR AttentionLine, LPCTSTR Subject, LPCTSTR CCList, LPCTSTR ReturnAddress, LPCTSTR SenderName, LPCTSTR Closing, LPCTSTR SenderCompany, 
		LPCTSTR SenderJobTitle, LPCTSTR SenderInitials, long EnclosureNumber, VARIANT* InfoBlock, VARIANT* RecipientCode, VARIANT* RecipientGender, VARIANT* ReturnAddressShortForm, VARIANT* SenderCity, VARIANT* SenderCode, VARIANT* SenderGender, 
		VARIANT* SenderReference);
	void AcceptAllRevisions();
	void RejectAllRevisions();
	void DetectLanguage();
	void ApplyTheme(LPCTSTR Name);
	void RemoveTheme();
	void WebPagePreview();
	void ReloadAs(long Encoding);
	CString GetActiveTheme();
	CString GetActiveThemeDisplayName();
	LPDISPATCH GetEmail();
	LPDISPATCH GetScripts();
	int GetLanguageDetected();
	void SetLanguageDetected(int bNewValue);
	long GetFarEastLineBreakLanguage();
	void SetFarEastLineBreakLanguage(long nNewValue);
	LPDISPATCH GetFrameset();
	VARIANT GetClickAndTypeParagraphStyle();
	void SetClickAndTypeParagraphStyle(VARIANT* newValue);
	LPDISPATCH GetHTMLProject();
	LPDISPATCH GetWebOptions();
	long GetOpenEncoding();
	long GetSaveEncoding();
	void SetSaveEncoding(long nNewValue);
	int GetOptimizeForWord97();
	void SetOptimizeForWord97(int bNewValue);
	int GetVBASigned();
	void ConvertVietDoc(long CodePageOrigin);
	void PrintOut(VARIANT* Background, VARIANT* Append, VARIANT* Range, VARIANT* OutputFileName, VARIANT* From, VARIANT* To, VARIANT* Item, VARIANT* Copies, VARIANT* Pages, VARIANT* PageType, VARIANT* PrintToFile, VARIANT* Collate, 
		VARIANT* ActivePrinterMacGX, VARIANT* ManualDuplexPrint, VARIANT* PrintZoomColumn, VARIANT* PrintZoomRow, VARIANT* PrintZoomPaperWidth, VARIANT* PrintZoomPaperHeight);
	LPDISPATCH GetMailEnvelope();
	int GetDisableFeatures();
	void SetDisableFeatures(int bNewValue);
	int GetDoNotEmbedSystemFonts();
	void SetDoNotEmbedSystemFonts(int bNewValue);
	LPDISPATCH GetSignatures();
	CString GetDefaultTargetFrame();
	void SetDefaultTargetFrame(LPCTSTR lpszNewValue);
	LPDISPATCH GetHTMLDivisions();
	long GetDisableFeaturesIntroducedAfter();
	void SetDisableFeaturesIntroducedAfter(long nNewValue);
	int GetRemovePersonalInformation();
	void SetRemovePersonalInformation(int bNewValue);
	LPDISPATCH GetSmartTags();
	void CheckIn(int SaveChanges, VARIANT* Comments, int MakePublic);
	int CanCheckin();
	void Merge(LPCTSTR FileName, VARIANT* MergeTarget, VARIANT* DetectFormatChanges, VARIANT* UseFormattingFrom, VARIANT* AddToRecentFiles);
	int GetEmbedSmartTags();
	void SetEmbedSmartTags(int bNewValue);
	int GetSmartTagsAsXMLProps();
	void SetSmartTagsAsXMLProps(int bNewValue);
	long GetTextEncoding();
	void SetTextEncoding(long nNewValue);
	long GetTextLineEnding();
	void SetTextLineEnding(long nNewValue);
	void SendForReview(VARIANT* Recipients, VARIANT* Subject, VARIANT* ShowMessage, VARIANT* IncludeAttachment);
	void ReplyWithChanges(VARIANT* ShowMessage);
	void EndReview();
	LPDISPATCH GetStyleSheets();
	VARIANT GetDefaultTableStyle();
	CString GetPasswordEncryptionProvider();
	CString GetPasswordEncryptionAlgorithm();
	long GetPasswordEncryptionKeyLength();
	int GetPasswordEncryptionFileProperties();
	void SetPasswordEncryptionOptions(LPCTSTR PasswordEncryptionProvider, LPCTSTR PasswordEncryptionAlgorithm, long PasswordEncryptionKeyLength, VARIANT* PasswordEncryptionFileProperties);
	void RecheckSmartTags();
	void RemoveSmartTags();
	void SetDefaultTableStyle(VARIANT* Style, int SetInTemplate);
	void DeleteAllComments();
	void AcceptAllRevisionsShown();
	void RejectAllRevisionsShown();
	void DeleteAllCommentsShown();
	void ResetFormFields();
	void SaveAs(VARIANT* FileName, VARIANT* FileFormat, VARIANT* LockComments, VARIANT* Password, VARIANT* AddToRecentFiles, VARIANT* WritePassword, VARIANT* ReadOnlyRecommended, VARIANT* EmbedTrueTypeFonts, VARIANT* SaveNativePictureFormat, 
		VARIANT* SaveFormsData, VARIANT* SaveAsAOCELetter, VARIANT* Encoding, VARIANT* InsertLineBreaks, VARIANT* AllowSubstitutions, VARIANT* LineEnding, VARIANT* AddBiDiMarks);
	int GetEmbedLinguisticData();
	void SetEmbedLinguisticData(int bNewValue);
	int GetFormattingShowFont();
	void SetFormattingShowFont(int bNewValue);
	int GetFormattingShowClear();
	void SetFormattingShowClear(int bNewValue);
	int GetFormattingShowParagraph();
	void SetFormattingShowParagraph(int bNewValue);
	int GetFormattingShowNumbering();
	void SetFormattingShowNumbering(int bNewValue);
	long GetFormattingShowFilter();
	void SetFormattingShowFilter(long nNewValue);
	void CheckNewSmartTags();
	LPDISPATCH GetPermission();
	LPDISPATCH GetXMLNodes();
	LPDISPATCH GetXMLSchemaReferences();
	LPDISPATCH GetSmartDocument();
	LPDISPATCH GetSharedWorkspace();
	LPDISPATCH GetSync();
	int GetEnforceStyle();
	void SetEnforceStyle(int bNewValue);
	int GetAutoFormatOverride();
	void SetAutoFormatOverride(int bNewValue);
	int GetXMLSaveDataOnly();
	void SetXMLSaveDataOnly(int bNewValue);
	int GetXMLHideNamespaces();
	void SetXMLHideNamespaces(int bNewValue);
	int GetXMLShowAdvancedErrors();
	void SetXMLShowAdvancedErrors(int bNewValue);
	int GetXMLUseXSLTWhenSaving();
	void SetXMLUseXSLTWhenSaving(int bNewValue);
	CString GetXMLSaveThroughXSLT();
	void SetXMLSaveThroughXSLT(LPCTSTR lpszNewValue);
	LPDISPATCH GetDocumentLibraryVersions();
	int GetReadingModeLayoutFrozen();
	void SetReadingModeLayoutFrozen(int bNewValue);
	int GetRemoveDateAndTime();
	void SetRemoveDateAndTime(int bNewValue);
	void SendFaxOverInternet(VARIANT* Recipients, VARIANT* Subject, VARIANT* ShowMessage);
	void TransformDocument(LPCTSTR Path, int DataOnly);
	void Protect(long Type, VARIANT* NoReset, VARIANT* Password, VARIANT* UseIRM, VARIANT* EnforceStyleLock);
	void SelectAllEditableRanges(VARIANT* EditorID);
	void DeleteAllEditableRanges(VARIANT* EditorID);
	void DeleteAllInkAnnotations();
	void Compare(LPCTSTR Name, VARIANT* AuthorName, VARIANT* CompareTarget, VARIANT* DetectFormatChanges, VARIANT* IgnoreAllComparisonWarnings, VARIANT* AddToRecentFiles, VARIANT* RemovePersonalInformation, VARIANT* RemoveDateAndTime);
	void RemoveLockedStyles();
	LPDISPATCH GetChildNodeSuggestions();
	LPDISPATCH SelectSingleNode(LPCTSTR XPath, LPCTSTR PrefixMapping, int FastSearchSkippingTextNodes);
	LPDISPATCH SelectNodes(LPCTSTR XPath, LPCTSTR PrefixMapping, int FastSearchSkippingTextNodes);
	LPDISPATCH GetXMLSchemaViolations();
	long GetReadingLayoutSizeX();
	void SetReadingLayoutSizeX(long nNewValue);
	long GetReadingLayoutSizeY();
	void SetReadingLayoutSizeY(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// _Font wrapper class

class _Font : public COleDispatchDriver
{
public:
	_Font() {}		// Calls COleDispatchDriver default constructor
	_Font(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_Font(const _Font& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetDuplicate();
	long GetBold();
	void SetBold(long nNewValue);
	long GetItalic();
	void SetItalic(long nNewValue);
	long GetHidden();
	void SetHidden(long nNewValue);
	long GetSmallCaps();
	void SetSmallCaps(long nNewValue);
	long GetAllCaps();
	void SetAllCaps(long nNewValue);
	long GetStrikeThrough();
	void SetStrikeThrough(long nNewValue);
	long GetDoubleStrikeThrough();
	void SetDoubleStrikeThrough(long nNewValue);
	long GetColorIndex();
	void SetColorIndex(long nNewValue);
	long GetSubscript();
	void SetSubscript(long nNewValue);
	long GetSuperscript();
	void SetSuperscript(long nNewValue);
	long GetUnderline();
	void SetUnderline(long nNewValue);
	float GetSize();
	void SetSize(float newValue);
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	long GetPosition();
	void SetPosition(long nNewValue);
	float GetSpacing();
	void SetSpacing(float newValue);
	long GetScaling();
	void SetScaling(long nNewValue);
	long GetShadow();
	void SetShadow(long nNewValue);
	long GetOutline();
	void SetOutline(long nNewValue);
	long GetEmboss();
	void SetEmboss(long nNewValue);
	float GetKerning();
	void SetKerning(float newValue);
	long GetEngrave();
	void SetEngrave(long nNewValue);
	long GetAnimation();
	void SetAnimation(long nNewValue);
	LPDISPATCH GetBorders();
	void SetBorders(LPDISPATCH newValue);
	LPDISPATCH GetShading();
	long GetEmphasisMark();
	void SetEmphasisMark(long nNewValue);
	int GetDisableCharacterSpaceGrid();
	void SetDisableCharacterSpaceGrid(int bNewValue);
	CString GetNameFarEast();
	void SetNameFarEast(LPCTSTR lpszNewValue);
	CString GetNameAscii();
	void SetNameAscii(LPCTSTR lpszNewValue);
	CString GetNameOther();
	void SetNameOther(LPCTSTR lpszNewValue);
	void Grow();
	void Shrink();
	void Reset();
	void SetAsTemplateDefault();
	long GetColor();
	void SetColor(long nNewValue);
	long GetBoldBi();
	void SetBoldBi(long nNewValue);
	long GetItalicBi();
	void SetItalicBi(long nNewValue);
	float GetSizeBi();
	void SetSizeBi(float newValue);
	CString GetNameBi();
	void SetNameBi(LPCTSTR lpszNewValue);
	long GetColorIndexBi();
	void SetColorIndexBi(long nNewValue);
	long GetDiacriticColor();
	void SetDiacriticColor(long nNewValue);
	long GetUnderlineColor();
	void SetUnderlineColor(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// Table wrapper class

class Table : public COleDispatchDriver
{
public:
	Table() {}		// Calls COleDispatchDriver default constructor
	Table(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Table(const Table& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetRange();
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetColumns();
	LPDISPATCH GetRows();
	LPDISPATCH GetBorders();
	void SetBorders(LPDISPATCH newValue);
	LPDISPATCH GetShading();
	int GetUniform();
	long GetAutoFormatType();
	void Select();
	void Delete();
	void SortAscending();
	void SortDescending();
	void AutoFormat(VARIANT* Format, VARIANT* ApplyBorders, VARIANT* ApplyShading, VARIANT* ApplyFont, VARIANT* ApplyColor, VARIANT* ApplyHeadingRows, VARIANT* ApplyLastRow, VARIANT* ApplyFirstColumn, VARIANT* ApplyLastColumn, VARIANT* AutoFit);
	void UpdateAutoFormat();
	LPDISPATCH Cell(long Row, long Column);
	LPDISPATCH Split(VARIANT* BeforeRow);
	LPDISPATCH ConvertToText(VARIANT* Separator, VARIANT* NestedTables);
	void AutoFitBehavior(long Behavior);
	void Sort(VARIANT* ExcludeHeader, VARIANT* FieldNumber, VARIANT* SortFieldType, VARIANT* SortOrder, VARIANT* FieldNumber2, VARIANT* SortFieldType2, VARIANT* SortOrder2, VARIANT* FieldNumber3, VARIANT* SortFieldType3, VARIANT* SortOrder3, 
		VARIANT* CaseSensitive, VARIANT* BidiSort, VARIANT* IgnoreThe, VARIANT* IgnoreKashida, VARIANT* IgnoreDiacritics, VARIANT* IgnoreHe, VARIANT* LanguageID);
	LPDISPATCH GetTables();
	long GetNestingLevel();
	int GetAllowPageBreaks();
	void SetAllowPageBreaks(int bNewValue);
	int GetAllowAutoFit();
	void SetAllowAutoFit(int bNewValue);
	float GetPreferredWidth();
	void SetPreferredWidth(float newValue);
	long GetPreferredWidthType();
	void SetPreferredWidthType(long nNewValue);
	float GetTopPadding();
	void SetTopPadding(float newValue);
	float GetBottomPadding();
	void SetBottomPadding(float newValue);
	float GetLeftPadding();
	void SetLeftPadding(float newValue);
	float GetRightPadding();
	void SetRightPadding(float newValue);
	float GetSpacing();
	void SetSpacing(float newValue);
	long GetTableDirection();
	void SetTableDirection(long nNewValue);
	CString GetId();
	void SetId(LPCTSTR lpszNewValue);
	VARIANT GetStyle();
	void SetStyle(VARIANT* newValue);
	int GetApplyStyleHeadingRows();
	void SetApplyStyleHeadingRows(int bNewValue);
	int GetApplyStyleLastRow();
	void SetApplyStyleLastRow(int bNewValue);
	int GetApplyStyleFirstColumn();
	void SetApplyStyleFirstColumn(int bNewValue);
	int GetApplyStyleLastColumn();
	void SetApplyStyleLastColumn(int bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// Selection wrapper class

class Selection : public COleDispatchDriver
{
public:
	Selection() {}		// Calls COleDispatchDriver default constructor
	Selection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Selection(const Selection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetText();
	void SetText(LPCTSTR lpszNewValue);
	LPDISPATCH GetFormattedText();
	void SetFormattedText(LPDISPATCH newValue);
	long GetStart();
	void SetStart(long nNewValue);
	long GetEnd();
	void SetEnd(long nNewValue);
	LPDISPATCH GetFont();
	void SetFont(LPDISPATCH newValue);
	long GetType();
	long GetStoryType();
	VARIANT GetStyle();
	void SetStyle(VARIANT* newValue);
	LPDISPATCH GetTables();
	LPDISPATCH GetWords();
	LPDISPATCH GetSentences();
	LPDISPATCH GetCharacters();
	LPDISPATCH GetFootnotes();
	LPDISPATCH GetEndnotes();
	LPDISPATCH GetComments();
	LPDISPATCH GetCells();
	LPDISPATCH GetSections();
	LPDISPATCH GetParagraphs();
	LPDISPATCH GetBorders();
	void SetBorders(LPDISPATCH newValue);
	LPDISPATCH GetShading();
	LPDISPATCH GetFields();
	LPDISPATCH GetFormFields();
	LPDISPATCH GetFrames();
	LPDISPATCH GetParagraphFormat();
	void SetParagraphFormat(LPDISPATCH newValue);
	LPDISPATCH GetPageSetup();
	void SetPageSetup(LPDISPATCH newValue);
	LPDISPATCH GetBookmarks();
	long GetStoryLength();
	long GetLanguageID();
	void SetLanguageID(long nNewValue);
	long GetLanguageIDFarEast();
	void SetLanguageIDFarEast(long nNewValue);
	long GetLanguageIDOther();
	void SetLanguageIDOther(long nNewValue);
	LPDISPATCH GetHyperlinks();
	LPDISPATCH GetColumns();
	LPDISPATCH GetRows();
	LPDISPATCH GetHeaderFooter();
	int GetIsEndOfRowMark();
	long GetBookmarkID();
	long GetPreviousBookmarkID();
	LPDISPATCH GetFind();
	LPDISPATCH GetRange();
	VARIANT GetInformation(long Type);
	long GetFlags();
	void SetFlags(long nNewValue);
	int GetActive();
	int GetStartIsActive();
	void SetStartIsActive(int bNewValue);
	int GetIPAtEndOfLine();
	int GetExtendMode();
	void SetExtendMode(int bNewValue);
	int GetColumnSelectMode();
	void SetColumnSelectMode(int bNewValue);
	long GetOrientation();
	void SetOrientation(long nNewValue);
	LPDISPATCH GetInlineShapes();
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetDocument();
	LPDISPATCH GetShapeRange();
	void Select();
	void SetRange(long Start, long End);
	void Collapse(VARIANT* Direction);
	void InsertBefore(LPCTSTR Text);
	void InsertAfter(LPCTSTR Text);
	LPDISPATCH Next(VARIANT* Unit, VARIANT* Count);
	LPDISPATCH Previous(VARIANT* Unit, VARIANT* Count);
	long StartOf(VARIANT* Unit, VARIANT* Extend);
	long EndOf(VARIANT* Unit, VARIANT* Extend);
	long Move(VARIANT* Unit, VARIANT* Count);
	long MoveStart(VARIANT* Unit, VARIANT* Count);
	long MoveEnd(VARIANT* Unit, VARIANT* Count);
	long MoveWhile(VARIANT* Cset, VARIANT* Count);
	long MoveStartWhile(VARIANT* Cset, VARIANT* Count);
	long MoveEndWhile(VARIANT* Cset, VARIANT* Count);
	long MoveUntil(VARIANT* Cset, VARIANT* Count);
	long MoveStartUntil(VARIANT* Cset, VARIANT* Count);
	long MoveEndUntil(VARIANT* Cset, VARIANT* Count);
	void Cut();
	void Copy();
	void Paste();
	void InsertBreak(VARIANT* Type);
	void InsertFile(LPCTSTR FileName, VARIANT* Range, VARIANT* ConfirmConversions, VARIANT* Link, VARIANT* Attachment);
	int InStory(LPDISPATCH Range);
	int InRange(LPDISPATCH Range);
	long Delete(VARIANT* Unit, VARIANT* Count);
	long Expand(VARIANT* Unit);
	void InsertParagraph();
	void InsertParagraphAfter();
	void InsertSymbol(long CharacterNumber, VARIANT* Font, VARIANT* Unicode, VARIANT* Bias);
	void CopyAsPicture();
	void SortAscending();
	void SortDescending();
	int IsEqual(LPDISPATCH Range);
	float Calculate();
	LPDISPATCH GoTo(VARIANT* What, VARIANT* Which, VARIANT* Count, VARIANT* Name);
	LPDISPATCH GoToNext(long What);
	LPDISPATCH GoToPrevious(long What);
	void PasteSpecial(VARIANT* IconIndex, VARIANT* Link, VARIANT* Placement, VARIANT* DisplayAsIcon, VARIANT* DataType, VARIANT* IconFileName, VARIANT* IconLabel);
	LPDISPATCH PreviousField();
	LPDISPATCH NextField();
	void InsertParagraphBefore();
	void InsertCells(VARIANT* ShiftCells);
	void Extend(VARIANT* Character);
	void Shrink();
	long MoveLeft(VARIANT* Unit, VARIANT* Count, VARIANT* Extend);
	long MoveRight(VARIANT* Unit, VARIANT* Count, VARIANT* Extend);
	long MoveUp(VARIANT* Unit, VARIANT* Count, VARIANT* Extend);
	long MoveDown(VARIANT* Unit, VARIANT* Count, VARIANT* Extend);
	long HomeKey(VARIANT* Unit, VARIANT* Extend);
	long EndKey(VARIANT* Unit, VARIANT* Extend);
	void EscapeKey();
	void TypeText(LPCTSTR Text);
	void CopyFormat();
	void PasteFormat();
	void TypeParagraph();
	void TypeBackspace();
	void NextSubdocument();
	void PreviousSubdocument();
	void SelectColumn();
	void SelectCurrentFont();
	void SelectCurrentAlignment();
	void SelectCurrentSpacing();
	void SelectCurrentIndent();
	void SelectCurrentTabs();
	void SelectCurrentColor();
	void CreateTextbox();
	void WholeStory();
	void SelectRow();
	void SplitTable();
	void InsertRows(VARIANT* NumRows);
	void InsertColumns();
	void InsertFormula(VARIANT* Formula, VARIANT* NumberFormat);
	LPDISPATCH NextRevision(VARIANT* Wrap);
	LPDISPATCH PreviousRevision(VARIANT* Wrap);
	void PasteAsNestedTable();
	LPDISPATCH CreateAutoTextEntry(LPCTSTR Name, LPCTSTR StyleName);
	void DetectLanguage();
	void SelectCell();
	void InsertRowsBelow(VARIANT* NumRows);
	void InsertColumnsRight();
	void InsertRowsAbove(VARIANT* NumRows);
	void RtlRun();
	void LtrRun();
	void BoldRun();
	void ItalicRun();
	void RtlPara();
	void LtrPara();
	void InsertDateTime(VARIANT* DateTimeFormat, VARIANT* InsertAsField, VARIANT* InsertAsFullWidth, VARIANT* DateLanguage, VARIANT* CalendarType);
	LPDISPATCH ConvertToTable(VARIANT* Separator, VARIANT* NumRows, VARIANT* NumColumns, VARIANT* InitialColumnWidth, VARIANT* Format, VARIANT* ApplyBorders, VARIANT* ApplyShading, VARIANT* ApplyFont, VARIANT* ApplyColor, 
		VARIANT* ApplyHeadingRows, VARIANT* ApplyLastRow, VARIANT* ApplyFirstColumn, VARIANT* ApplyLastColumn, VARIANT* AutoFit, VARIANT* AutoFitBehavior, VARIANT* DefaultTableBehavior);
	long GetNoProofing();
	void SetNoProofing(long nNewValue);
	LPDISPATCH GetTopLevelTables();
	int GetLanguageDetected();
	void SetLanguageDetected(int bNewValue);
	float GetFitTextWidth();
	void SetFitTextWidth(float newValue);
	void ClearFormatting();
	void PasteAppendTable();
	LPDISPATCH GetHTMLDivisions();
	LPDISPATCH GetSmartTags();
	LPDISPATCH GetChildShapeRange();
	int GetHasChildShapeRange();
	LPDISPATCH GetFootnoteOptions();
	LPDISPATCH GetEndnoteOptions();
	void ToggleCharacterCode();
	void PasteAndFormat(long Type);
	void PasteExcelTable(int LinkedToExcel, int WordFormatting, int RTF);
	void ShrinkDiscontiguousSelection();
	void InsertStyleSeparator();
	void Sort(VARIANT* ExcludeHeader, VARIANT* FieldNumber, VARIANT* SortFieldType, VARIANT* SortOrder, VARIANT* FieldNumber2, VARIANT* SortFieldType2, VARIANT* SortOrder2, VARIANT* FieldNumber3, VARIANT* SortFieldType3, VARIANT* SortOrder3, 
		VARIANT* SortColumn, VARIANT* Separator, VARIANT* CaseSensitive, VARIANT* BidiSort, VARIANT* IgnoreThe, VARIANT* IgnoreKashida, VARIANT* IgnoreDiacritics, VARIANT* IgnoreHe, VARIANT* LanguageID, VARIANT* SubFieldNumber, 
		VARIANT* SubFieldNumber2, VARIANT* SubFieldNumber3);
	LPDISPATCH GetXMLNodes();
	LPDISPATCH GetXMLParentNode();
	LPDISPATCH GetEditors();
	CString GetXml(int DataOnly);
	VARIANT GetEnhMetaFileBits();
	LPDISPATCH GoToEditableRange(VARIANT* EditorID);
	void InsertXML(LPCTSTR XML, VARIANT* Transform);
	void InsertCaption(VARIANT* Label, VARIANT* Title, VARIANT* TitleAutoText, VARIANT* Position, VARIANT* ExcludeLabel);
	void InsertCrossReference(VARIANT* ReferenceType, long ReferenceKind, VARIANT* ReferenceItem, VARIANT* InsertAsHyperlink, VARIANT* IncludePosition, VARIANT* SeparateNumbers, VARIANT* SeparatorString);
};
/////////////////////////////////////////////////////////////////////////////
// Tables wrapper class

class Tables : public COleDispatchDriver
{
public:
	Tables() {}		// Calls COleDispatchDriver default constructor
	Tables(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Tables(const Tables& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPUNKNOWN Get_NewEnum();
	long GetCount();
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH Item(long Index);
	LPDISPATCH Add(LPDISPATCH Range, long NumRows, long NumColumns, VARIANT* DefaultTableBehavior, VARIANT* AutoFitBehavior);
	long GetNestingLevel();
};
/////////////////////////////////////////////////////////////////////////////
// Cell wrapper class

class Cell : public COleDispatchDriver
{
public:
	Cell() {}		// Calls COleDispatchDriver default constructor
	Cell(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Cell(const Cell& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetRange();
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	long GetRowIndex();
	long GetColumnIndex();
	float GetWidth();
	void SetWidth(float newValue);
	float GetHeight();
	void SetHeight(float newValue);
	long GetHeightRule();
	void SetHeightRule(long nNewValue);
	long GetVerticalAlignment();
	void SetVerticalAlignment(long nNewValue);
	LPDISPATCH GetColumn();
	LPDISPATCH GetRow();
	LPDISPATCH GetNext();
	LPDISPATCH GetPrevious();
	LPDISPATCH GetShading();
	LPDISPATCH GetBorders();
	void SetBorders(LPDISPATCH newValue);
	void Select();
	void Delete(VARIANT* ShiftCells);
	void Formula(VARIANT* Formula, VARIANT* NumFormat);
	void SetWidth(float ColumnWidth, long RulerStyle);
	void SetHeight(VARIANT* RowHeight, long HeightRule);
	void Merge(LPDISPATCH MergeTo);
	void Split(VARIANT* NumRows, VARIANT* NumColumns);
	void AutoSum();
	LPDISPATCH GetTables();
	long GetNestingLevel();
	int GetWordWrap();
	void SetWordWrap(int bNewValue);
	float GetPreferredWidth();
	void SetPreferredWidth(float newValue);
	int GetFitText();
	void SetFitText(int bNewValue);
	float GetTopPadding();
	void SetTopPadding(float newValue);
	float GetBottomPadding();
	void SetBottomPadding(float newValue);
	float GetLeftPadding();
	void SetLeftPadding(float newValue);
	float GetRightPadding();
	void SetRightPadding(float newValue);
	CString GetId();
	void SetId(LPCTSTR lpszNewValue);
	long GetPreferredWidthType();
	void SetPreferredWidthType(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// Range wrapper class

class Range : public COleDispatchDriver
{
public:
	Range() {}		// Calls COleDispatchDriver default constructor
	Range(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Range(const Range& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetText();
	void SetText(LPCTSTR lpszNewValue);
	LPDISPATCH GetFormattedText();
	void SetFormattedText(LPDISPATCH newValue);
	long GetStart();
	void SetStart(long nNewValue);
	long GetEnd();
	void SetEnd(long nNewValue);
	LPDISPATCH GetFont();
	void SetFont(LPDISPATCH newValue);
	LPDISPATCH GetDuplicate();
	long GetStoryType();
	LPDISPATCH GetTables();
	LPDISPATCH GetWords();
	LPDISPATCH GetSentences();
	LPDISPATCH GetCharacters();
	LPDISPATCH GetFootnotes();
	LPDISPATCH GetEndnotes();
	LPDISPATCH GetComments();
	LPDISPATCH GetCells();
	LPDISPATCH GetSections();
	LPDISPATCH GetParagraphs();
	LPDISPATCH GetBorders();
	void SetBorders(LPDISPATCH newValue);
	LPDISPATCH GetShading();
	LPDISPATCH GetTextRetrievalMode();
	void SetTextRetrievalMode(LPDISPATCH newValue);
	LPDISPATCH GetFields();
	LPDISPATCH GetFormFields();
	LPDISPATCH GetFrames();
	LPDISPATCH GetParagraphFormat();
	void SetParagraphFormat(LPDISPATCH newValue);
	LPDISPATCH GetListFormat();
	LPDISPATCH GetBookmarks();
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	long GetBold();
	void SetBold(long nNewValue);
	long GetItalic();
	void SetItalic(long nNewValue);
	long GetUnderline();
	void SetUnderline(long nNewValue);
	long GetEmphasisMark();
	void SetEmphasisMark(long nNewValue);
	int GetDisableCharacterSpaceGrid();
	void SetDisableCharacterSpaceGrid(int bNewValue);
	LPDISPATCH GetRevisions();
	VARIANT GetStyle();
	void SetStyle(VARIANT* newValue);
	long GetStoryLength();
	long GetLanguageID();
	void SetLanguageID(long nNewValue);
	LPDISPATCH GetSynonymInfo();
	LPDISPATCH GetHyperlinks();
	LPDISPATCH GetListParagraphs();
	LPDISPATCH GetSubdocuments();
	int GetGrammarChecked();
	void SetGrammarChecked(int bNewValue);
	int GetSpellingChecked();
	void SetSpellingChecked(int bNewValue);
	long GetHighlightColorIndex();
	void SetHighlightColorIndex(long nNewValue);
	LPDISPATCH GetColumns();
	LPDISPATCH GetRows();
	int GetIsEndOfRowMark();
	long GetBookmarkID();
	long GetPreviousBookmarkID();
	LPDISPATCH GetFind();
	LPDISPATCH GetPageSetup();
	void SetPageSetup(LPDISPATCH newValue);
	LPDISPATCH GetShapeRange();
	long GetCase();
	void SetCase(long nNewValue);
	VARIANT GetInformation(long Type);
	LPDISPATCH GetReadabilityStatistics();
	LPDISPATCH GetGrammaticalErrors();
	LPDISPATCH GetSpellingErrors();
	long GetOrientation();
	void SetOrientation(long nNewValue);
	LPDISPATCH GetInlineShapes();
	LPDISPATCH GetNextStoryRange();
	long GetLanguageIDFarEast();
	void SetLanguageIDFarEast(long nNewValue);
	long GetLanguageIDOther();
	void SetLanguageIDOther(long nNewValue);
	void Select();
	void SetRange(long Start, long End);
	void Collapse(VARIANT* Direction);
	void InsertBefore(LPCTSTR Text);
	void InsertAfter(LPCTSTR Text);
	LPDISPATCH Next(VARIANT* Unit, VARIANT* Count);
	LPDISPATCH Previous(VARIANT* Unit, VARIANT* Count);
	long StartOf(VARIANT* Unit, VARIANT* Extend);
	long EndOf(VARIANT* Unit, VARIANT* Extend);
	long Move(VARIANT* Unit, VARIANT* Count);
	long MoveStart(VARIANT* Unit, VARIANT* Count);
	long MoveEnd(VARIANT* Unit, VARIANT* Count);
	long MoveWhile(VARIANT* Cset, VARIANT* Count);
	long MoveStartWhile(VARIANT* Cset, VARIANT* Count);
	long MoveEndWhile(VARIANT* Cset, VARIANT* Count);
	long MoveUntil(VARIANT* Cset, VARIANT* Count);
	long MoveStartUntil(VARIANT* Cset, VARIANT* Count);
	long MoveEndUntil(VARIANT* Cset, VARIANT* Count);
	void Cut();
	void Copy();
	void Paste();
	void InsertBreak(VARIANT* Type);
	void InsertFile(LPCTSTR FileName, VARIANT* Range, VARIANT* ConfirmConversions, VARIANT* Link, VARIANT* Attachment);
	int InStory(LPDISPATCH Range);
	int InRange(LPDISPATCH Range);
	long Delete(VARIANT* Unit, VARIANT* Count);
	void WholeStory();
	long Expand(VARIANT* Unit);
	void InsertParagraph();
	void InsertParagraphAfter();
	void InsertSymbol(long CharacterNumber, VARIANT* Font, VARIANT* Unicode, VARIANT* Bias);
	void CopyAsPicture();
	void SortAscending();
	void SortDescending();
	int IsEqual(LPDISPATCH Range);
	float Calculate();
	LPDISPATCH GoTo(VARIANT* What, VARIANT* Which, VARIANT* Count, VARIANT* Name);
	LPDISPATCH GoToNext(long What);
	LPDISPATCH GoToPrevious(long What);
	void PasteSpecial(VARIANT* IconIndex, VARIANT* Link, VARIANT* Placement, VARIANT* DisplayAsIcon, VARIANT* DataType, VARIANT* IconFileName, VARIANT* IconLabel);
	void LookupNameProperties();
	long ComputeStatistics(long Statistic);
	void Relocate(long Direction);
	void CheckSynonyms();
	void SubscribeTo(LPCTSTR Edition, VARIANT* Format);
	void CreatePublisher(VARIANT* Edition, VARIANT* ContainsPICT, VARIANT* ContainsRTF, VARIANT* ContainsText);
	void InsertAutoText();
	void InsertDatabase(VARIANT* Format, VARIANT* Style, VARIANT* LinkToSource, VARIANT* Connection, VARIANT* SQLStatement, VARIANT* SQLStatement1, VARIANT* PasswordDocument, VARIANT* PasswordTemplate, VARIANT* WritePasswordDocument, 
		VARIANT* WritePasswordTemplate, VARIANT* DataSource, VARIANT* From, VARIANT* To, VARIANT* IncludeFields);
	void AutoFormat();
	void CheckGrammar();
	void CheckSpelling(VARIANT* CustomDictionary, VARIANT* IgnoreUppercase, VARIANT* AlwaysSuggest, VARIANT* CustomDictionary2, VARIANT* CustomDictionary3, VARIANT* CustomDictionary4, VARIANT* CustomDictionary5, VARIANT* CustomDictionary6, 
		VARIANT* CustomDictionary7, VARIANT* CustomDictionary8, VARIANT* CustomDictionary9, VARIANT* CustomDictionary10);
	LPDISPATCH GetSpellingSuggestions(VARIANT* CustomDictionary, VARIANT* IgnoreUppercase, VARIANT* MainDictionary, VARIANT* SuggestionMode, VARIANT* CustomDictionary2, VARIANT* CustomDictionary3, VARIANT* CustomDictionary4, 
		VARIANT* CustomDictionary5, VARIANT* CustomDictionary6, VARIANT* CustomDictionary7, VARIANT* CustomDictionary8, VARIANT* CustomDictionary9, VARIANT* CustomDictionary10);
	void InsertParagraphBefore();
	void NextSubdocument();
	void PreviousSubdocument();
	void ConvertHangulAndHanja(VARIANT* ConversionsMode, VARIANT* FastConversion, VARIANT* CheckHangulEnding, VARIANT* EnableRecentOrdering, VARIANT* CustomDictionary);
	void PasteAsNestedTable();
	void ModifyEnclosure(VARIANT* Style, VARIANT* Symbol, VARIANT* EnclosedText);
	void PhoneticGuide(LPCTSTR Text, long Alignment, long Raise, long FontSize, LPCTSTR FontName);
	void InsertDateTime(VARIANT* DateTimeFormat, VARIANT* InsertAsField, VARIANT* InsertAsFullWidth, VARIANT* DateLanguage, VARIANT* CalendarType);
	void Sort(VARIANT* ExcludeHeader, VARIANT* FieldNumber, VARIANT* SortFieldType, VARIANT* SortOrder, VARIANT* FieldNumber2, VARIANT* SortFieldType2, VARIANT* SortOrder2, VARIANT* FieldNumber3, VARIANT* SortFieldType3, VARIANT* SortOrder3, 
		VARIANT* SortColumn, VARIANT* Separator, VARIANT* CaseSensitive, VARIANT* BidiSort, VARIANT* IgnoreThe, VARIANT* IgnoreKashida, VARIANT* IgnoreDiacritics, VARIANT* IgnoreHe, VARIANT* LanguageID);
	void DetectLanguage();
	LPDISPATCH ConvertToTable(VARIANT* Separator, VARIANT* NumRows, VARIANT* NumColumns, VARIANT* InitialColumnWidth, VARIANT* Format, VARIANT* ApplyBorders, VARIANT* ApplyShading, VARIANT* ApplyFont, VARIANT* ApplyColor, 
		VARIANT* ApplyHeadingRows, VARIANT* ApplyLastRow, VARIANT* ApplyFirstColumn, VARIANT* ApplyLastColumn, VARIANT* AutoFit, VARIANT* AutoFitBehavior, VARIANT* DefaultTableBehavior);
	void TCSCConverter(long WdTCSCConverterDirection, int CommonTerms, int UseVariants);
	int GetLanguageDetected();
	void SetLanguageDetected(int bNewValue);
	float GetFitTextWidth();
	void SetFitTextWidth(float newValue);
	long GetHorizontalInVertical();
	void SetHorizontalInVertical(long nNewValue);
	long GetTwoLinesInOne();
	void SetTwoLinesInOne(long nNewValue);
	int GetCombineCharacters();
	void SetCombineCharacters(int bNewValue);
	long GetNoProofing();
	void SetNoProofing(long nNewValue);
	LPDISPATCH GetTopLevelTables();
	LPDISPATCH GetScripts();
	long GetCharacterWidth();
	void SetCharacterWidth(long nNewValue);
	long GetKana();
	void SetKana(long nNewValue);
	long GetBoldBi();
	void SetBoldBi(long nNewValue);
	long GetItalicBi();
	void SetItalicBi(long nNewValue);
	CString GetId();
	void SetId(LPCTSTR lpszNewValue);
	LPDISPATCH GetHTMLDivisions();
	LPDISPATCH GetSmartTags();
	int GetShowAll();
	void SetShowAll(int bNewValue);
	LPDISPATCH GetDocument();
	LPDISPATCH GetFootnoteOptions();
	LPDISPATCH GetEndnoteOptions();
	void PasteAndFormat(long Type);
	void PasteExcelTable(int LinkedToExcel, int WordFormatting, int RTF);
	void PasteAppendTable();
	LPDISPATCH GetXMLNodes();
	LPDISPATCH GetXMLParentNode();
	LPDISPATCH GetEditors();
	CString GetXml(int DataOnly);
	VARIANT GetEnhMetaFileBits();
	LPDISPATCH GoToEditableRange(VARIANT* EditorID);
	void InsertXML(LPCTSTR XML, VARIANT* Transform);
	void InsertCaption(VARIANT* Label, VARIANT* Title, VARIANT* TitleAutoText, VARIANT* Position, VARIANT* ExcludeLabel);
	void InsertCrossReference(VARIANT* ReferenceType, long ReferenceKind, VARIANT* ReferenceItem, VARIANT* InsertAsHyperlink, VARIANT* IncludePosition, VARIANT* SeparateNumbers, VARIANT* SeparatorString);
};
/////////////////////////////////////////////////////////////////////////////
// Range wrapper class

/////////////////////////////////////////////////////////////////////////////
// _ParagraphFormat wrapper class

class _ParagraphFormat : public COleDispatchDriver
{
public:
	_ParagraphFormat() {}		// Calls COleDispatchDriver default constructor
	_ParagraphFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	_ParagraphFormat(const _ParagraphFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetDuplicate();
	VARIANT GetStyle();
	void SetStyle(VARIANT* newValue);
	long GetAlignment();
	void SetAlignment(long nNewValue);
	long GetKeepTogether();
	void SetKeepTogether(long nNewValue);
	long GetKeepWithNext();
	void SetKeepWithNext(long nNewValue);
	long GetPageBreakBefore();
	void SetPageBreakBefore(long nNewValue);
	long GetNoLineNumber();
	void SetNoLineNumber(long nNewValue);
	float GetRightIndent();
	void SetRightIndent(float newValue);
	float GetLeftIndent();
	void SetLeftIndent(float newValue);
	float GetFirstLineIndent();
	void SetFirstLineIndent(float newValue);
	float GetLineSpacing();
	void SetLineSpacing(float newValue);
	long GetLineSpacingRule();
	void SetLineSpacingRule(long nNewValue);
	float GetSpaceBefore();
	void SetSpaceBefore(float newValue);
	float GetSpaceAfter();
	void SetSpaceAfter(float newValue);
	long GetHyphenation();
	void SetHyphenation(long nNewValue);
	long GetWidowControl();
	void SetWidowControl(long nNewValue);
	long GetFarEastLineBreakControl();
	void SetFarEastLineBreakControl(long nNewValue);
	long GetWordWrap();
	void SetWordWrap(long nNewValue);
	long GetHangingPunctuation();
	void SetHangingPunctuation(long nNewValue);
	long GetHalfWidthPunctuationOnTopOfLine();
	void SetHalfWidthPunctuationOnTopOfLine(long nNewValue);
	long GetAddSpaceBetweenFarEastAndAlpha();
	void SetAddSpaceBetweenFarEastAndAlpha(long nNewValue);
	long GetAddSpaceBetweenFarEastAndDigit();
	void SetAddSpaceBetweenFarEastAndDigit(long nNewValue);
	long GetBaseLineAlignment();
	void SetBaseLineAlignment(long nNewValue);
	long GetAutoAdjustRightIndent();
	void SetAutoAdjustRightIndent(long nNewValue);
	long GetDisableLineHeightGrid();
	void SetDisableLineHeightGrid(long nNewValue);
	LPDISPATCH GetTabStops();
	void SetTabStops(LPDISPATCH newValue);
	LPDISPATCH GetBorders();
	void SetBorders(LPDISPATCH newValue);
	LPDISPATCH GetShading();
	long GetOutlineLevel();
	void SetOutlineLevel(long nNewValue);
	void CloseUp();
	void OpenUp();
	void OpenOrCloseUp();
	void TabHangingIndent(short Count);
	void TabIndent(short Count);
	void Reset();
	void Space1();
	void Space15();
	void Space2();
	void IndentCharWidth(short Count);
	void IndentFirstLineCharWidth(short Count);
	float GetCharacterUnitRightIndent();
	void SetCharacterUnitRightIndent(float newValue);
	float GetCharacterUnitLeftIndent();
	void SetCharacterUnitLeftIndent(float newValue);
	float GetCharacterUnitFirstLineIndent();
	void SetCharacterUnitFirstLineIndent(float newValue);
	float GetLineUnitBefore();
	void SetLineUnitBefore(float newValue);
	float GetLineUnitAfter();
	void SetLineUnitAfter(float newValue);
	long GetReadingOrder();
	void SetReadingOrder(long nNewValue);
	long GetSpaceBeforeAuto();
	void SetSpaceBeforeAuto(long nNewValue);
	long GetSpaceAfterAuto();
	void SetSpaceAfterAuto(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// Find wrapper class

class Find : public COleDispatchDriver
{
public:
	Find() {}		// Calls COleDispatchDriver default constructor
	Find(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Find(const Find& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	int GetForward();
	void SetForward(int bNewValue);
	LPDISPATCH GetFont();
	void SetFont(LPDISPATCH newValue);
	int GetFound();
	int GetMatchAllWordForms();
	void SetMatchAllWordForms(int bNewValue);
	int GetMatchCase();
	void SetMatchCase(int bNewValue);
	int GetMatchWildcards();
	void SetMatchWildcards(int bNewValue);
	int GetMatchSoundsLike();
	void SetMatchSoundsLike(int bNewValue);
	int GetMatchWholeWord();
	void SetMatchWholeWord(int bNewValue);
	int GetMatchFuzzy();
	void SetMatchFuzzy(int bNewValue);
	int GetMatchByte();
	void SetMatchByte(int bNewValue);
	LPDISPATCH GetParagraphFormat();
	void SetParagraphFormat(LPDISPATCH newValue);
	VARIANT GetStyle();
	void SetStyle(VARIANT* newValue);
	CString GetText();
	void SetText(LPCTSTR lpszNewValue);
	long GetLanguageID();
	void SetLanguageID(long nNewValue);
	long GetHighlight();
	void SetHighlight(long nNewValue);
	LPDISPATCH GetReplacement();
	LPDISPATCH GetFrame();
	long GetWrap();
	void SetWrap(long nNewValue);
	int GetFormat();
	void SetFormat(int bNewValue);
	long GetLanguageIDFarEast();
	void SetLanguageIDFarEast(long nNewValue);
	long GetLanguageIDOther();
	void SetLanguageIDOther(long nNewValue);
	int GetCorrectHangulEndings();
	void SetCorrectHangulEndings(int bNewValue);
	void ClearFormatting();
	void SetAllFuzzyOptions();
	void ClearAllFuzzyOptions();
	int Execute(VARIANT* FindText, VARIANT* MatchCase, VARIANT* MatchWholeWord, VARIANT* MatchWildcards, VARIANT* MatchSoundsLike, VARIANT* MatchAllWordForms, VARIANT* Forward, VARIANT* Wrap, VARIANT* Format, VARIANT* ReplaceWith, 
		VARIANT* Replace, VARIANT* MatchKashida, VARIANT* MatchDiacritics, VARIANT* MatchAlefHamza, VARIANT* MatchControl);
	long GetNoProofing();
	void SetNoProofing(long nNewValue);
	int GetMatchKashida();
	void SetMatchKashida(int bNewValue);
	int GetMatchDiacritics();
	void SetMatchDiacritics(int bNewValue);
	int GetMatchAlefHamza();
	void SetMatchAlefHamza(int bNewValue);
	int GetMatchControl();
	void SetMatchControl(int bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// Replacement wrapper class

class Replacement : public COleDispatchDriver
{
public:
	Replacement() {}		// Calls COleDispatchDriver default constructor
	Replacement(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	Replacement(const Replacement& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetApplication();
	long GetCreator();
	LPDISPATCH GetParent();
	LPDISPATCH GetFont();
	void SetFont(LPDISPATCH newValue);
	LPDISPATCH GetParagraphFormat();
	void SetParagraphFormat(LPDISPATCH newValue);
	VARIANT GetStyle();
	void SetStyle(VARIANT* newValue);
	CString GetText();
	void SetText(LPCTSTR lpszNewValue);
	long GetLanguageID();
	void SetLanguageID(long nNewValue);
	long GetHighlight();
	void SetHighlight(long nNewValue);
	LPDISPATCH GetFrame();
	long GetLanguageIDFarEast();
	void SetLanguageIDFarEast(long nNewValue);
	void ClearFormatting();
	long GetNoProofing();
	void SetNoProofing(long nNewValue);
};
