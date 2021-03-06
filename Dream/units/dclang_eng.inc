
  SKBDClassic='Classic';
  SKBDBrief='Brief';
  SKBDEpsilon='Epsilon';
  SKBDVisualStudio='Visual Studio';

  SVerbActionListEditor ='ActionList Editor...';
  SVerbStandardAction = 'New Standard Action...';


// ------------------- New Object captions -----------------

  SErrAlreadyInNewDialog='%s is already registered for the New Dialog';

  SDelphiApp='Delphi Application';
  SVBScriptApp='VBScript Application';
  SJScriptApp='JScript Application';
  SPerlApp = 'Perl Application';
  SPythonApp = 'Python Application';

  SDelphiForm='Delphi Form';
  SVBScriptForm='VBScript Form';
  SJScriptForm='JScript Form';
  SPerlForm = 'Perl Form';
  SPythonForm = 'Python Form';

  SDelphiDataModule='Delphi Data Module';
  SVBScriptDataModule='VBScript Data Module';
  SJScriptDataModule='JScript Data Module';
  SPerlDataModule='Perl Data Module';
  SPythonDataModule = 'Python Data Module';

  STextFile='Text File';
  SHTMLtext = 'HTML file';
  SSqltext = 'SQL file';

  SDelphiUnit='Delphi Unit';
  SJScriptUnit='JScript Unit';
  SVBScriptUnit='VBScript Unit';
  SPerlUnit='Perl Unit';
  SPythonUnit = 'Python Unit';

  SDelphiReport='Delphi Report';
  SPerlReport='Perl Report';
  SVBScriptReport='VBScript Report';
  SJScriptReport='JScript Report';
  SPythonReport='Python Report';
  SSimpleReport='Simple Report';

  SSimpleForm='Simple Form';
  SSimpleDataModule='Simple Data Module';

  SProjectFile='Project File';
  SWorkSpaceFile='WorkSpace File';


//--------------------- File Types captions --------------


  SAllFiles='All Files';
  SUnitFiles='Unit files';
  SProjectWorkSpace='Project/WorkSpace';
  SFormFile='Form File';

//--------------------- Verb captions --------------

  SVerbMenuItems = 'Edit &Items...';
  SVerbSave='&Save';
  SVerbSaveAs='Save &As...';
  SVerbClose='&Close';
  SVerbActivateProject='Activate Project';
  SVerbAdd='A&dd...';
  SVerbSQLEditor ='SQL Editor...';
  SVerbResourceMaster = 'Resource Master';
  SVerbIdeInspector  ='IDE Inspector';
  SVerbMultiSourceEditor = 'Edit Sources...';

  SRegPackages='Packages';

//--------------------- Dialog titles --------------

  SExportToTitle = 'Export To';
  SSaveAsTitle = 'Save As';
  SOpenTitle = 'Open';

//--------------------- Convert Errors ---------------------------
  SErrInvalidBoolean='''%s'' is not a valid boolean value';

//--------------------- Parser Errors ----------------------------

  SErrCharPos=' at Line:%d, Char:%d. ';
  SErrMaxIfDefReached='Only %d nested levels of compiler directives are allowed';
  SErrCompilerDirective='Invalid compiler directive: "%s"';
  STokenListEmpty='Token list is empty';
  SErrFutureState='State is in future';
  SErrTokenExpected='Token %d expected';

// -------------------- Other Errors -------------------------

  SErrFormNameEmpty='Form name can not be empty';
  SErrMethodReferenced='Referenced method %s does not exist. Remove the reference?';
  SErrControlsInData = 'Controls cannot be added to a data module';
  SErrInvalidModuleClass = 'Invalid Module Class - %s';
  SErrCreatingForm='Error creating form';
  SErrUpdateRes = 'Error updating resource';
  SErrOnlyForms='This version of Resource Master can edit only forms';
  SErrAlreadyInProject='Object with name "%s" is already in project';
  SErrOnlyWin32FileSystem='This operation can be performed only on Win32 file system';
  SErrObjectNotInProject='Object %S isn''t in active project';
  SErrNotInstantReport='Can be inserted only in TInstantReport';
  SErrAlreadyUseAll='Object %S already uses all available objects';
  SErrBadPropStream='Error in property stream';
  SErrNoComp='Component %s doesn''t exist';
  SErrAlreadyHaveOwner='This workspace already has owner';
  SErrNonMonoSpacedFont = 'Only monospaced fonts can be used';
  SerrInvalidMoving = 'Can''t move here';
  sErrCantOpen= 'Can''t open module %s'#13#10'Error code : %d';
  SErrNoNewExtensions = 'New extensions not installed';
  SErrOpenFile = 'Error opening %s';
  SErrorCreateMap  = 'Error creating file mapping';
  SErrorMap    = 'Can''t map %s into memory';
  SErrReadOnlyFile='''%s'' is a read-only file';

//------------------Scripter constants ----------------------------------

  SErrScriptEngineRun = 'Scripting engine can''t be started';
  SErrAlreadyLaunched = 'Program is already launched';
  SErrNoCodeDesigner  = 'No code designer registered for %s file type';
  SErrNoScriptRunner  = 'No Script Runner registered for %s file type';
  SErrNoScriptForLang = 'No Script Runner registered for %s language';
  SErrUnitNotFound    = 'Can''t load unit %s';
  SErrNoRunnableObjects = 'Can''t run';
  SErrExternalRun     = 'Error running program : %s';
  SContinueExecution  = 'Continue execution?';
  SFilePrefix = 'File : ';
//----------------------------------------------------

  SOtherGroupName='Other'; // in Object Inspector
  STitleFilterName='Filter Name';
  STitleFilter='Filter';
  SVerbUsesRetriever = 'Uses Retriever...';
  SVerbAssignVerbs='Assign Verbs';
  SCapUseObjects='Use objects in ';
  SCapRunParameters='Run parameters';

  SPageNew='New';
  SPageForm='Form';
  SPageUnit='Unit';
  SPageReport='Report';
  SPageDataModule='Data Module';


  SWorkSpace='WorkSpace';
  SProject='Project';


  SErrCantSaveObject='Can''t save object';

  SErrDeleteFile='Can''t delete file %S';
  SErrRenameFile='Can''t rename file %s to file %s';
  SErrCantCreateTemp='Can''t create temporary filename';

  SStatModified='Modified';
  SStatInsert='Insert';
  SStatOverwrite='Overwrite';
  SStatReadOnly ='Read Only';



  SErrOpenForm='Open form error';
  SErrReadProps = 'Error reading properties';
  SErrDuplicateItem='Can''t insert duplicate item';

  SClipboard='Clipboard';


// OCX
  SErrOCXLoadFail = 'Failed to load "%s"';
  SErrOCXCantFindProc = '%s procedure not found in "%s"';
  SErrOCXRegFail = 'Call to %s failed in "%s"';


// ----------------- Filters ------------------------
  SOCXFilter = 'ActiveX (*.ocx)|*.ocx';
  SAVIFilesFilter = 'AVI files (*.avi)|*.avi';
{$IFDEF CPB3}
  SPackagesFilter='Packages (*.bpl)|*.bpl';
{$ELSE}
  SPackagesFilter='Packages (*.dpl)|*.dpl';
{$ENDIF}
  SPictFilter = 'All (*.jpg;*.jpeg;*.bmp;*.ico;*.emf;*.wmf)'+
    '|*.jpg;*.jpeg;*.bmp;*.ico;*.emf;*.wmf|JPEG Image File (*.jpg;*.jpeg)|*.jpg;*.jpeg|'+
    '|Bitmaps (*.bmp)|*.bmp|Icons (*.ico)|*.ico|'+
    'Enhanced Metafiles (*.emf)|*.emf|Metafiles (*.wmf)|*.wmf';
  SFormFilter='Delphi form|*.dfm';
  SColorStyleFilter='Color scheme (*.rgb)|*.RGB';

  SExeFilter= 'Executable Files|*.EXE;*.DLL;*.DPL;*.BPL|All Files|*.*';

  SExecutableFiles='Executable Files';

// ---------------- Palette Pages ---------------------

  SPalStandard='Standard';
  SPalAdditional='Additional';
  SPalWin32='Win32';
  SPalDialogs='Dialogs';
  SPalSystem='System';
  SPalDataControls = 'Data Controls';
  SPalDataAccess = 'Data Access';
  SPalMidas = 'Midas';
  SPalWin31 = 'Win 3.1';
  SPalActiveX='ActiveX';
  SPalDecisionCube='Decision Cube';
  SPalQReport='QReport';

// ------------------- Form captions ------------------

  SCapLines=' lines)';
  SCapGotoLineNumber='Go to line Number';
  SCapEnterNewLine='&Enter new line number:';
  SCreateOrderCaption='Creation Order';
  STabOrderCaption='Tab order';
  SCapEditing='Editing ';
  SCapWindowList='Window List';
  SCapAddFields='Add fields';
  SCapSelectSource='Select DataSource';
  SCapScale='Scale';
  SCapScalingFactor='&Scaling Factor:';
  SCapProjectManager='Project Manager';
  SErrDlg  = 'Error Reading Form';
  SFindText = 'Find Text';
  SReplText ='Replace Text';
  SPstoredEdit = 'Property Storage Editor';
  SPackActiveX = 'Packages/ActiveX';
  SNewItem = 'New Item';
  SNewField = 'New field';
  SFilterEdit = 'Filter Editor';
  SObjectExplorer = 'Object Explorer';
  SStrlEdit = 'String list editor';

// ------------------- dcl0.pas ----------------------------

  SSaveChanges='Save changes to %s?';
  SCantUseMore='This unit already uses all available units';
  SUseUnitCaption='Use Unit';

  SEmptyFileName='File name can not be empty';
  SNotValidIdent='''%s'' is not a valid name.';
  SOpenFileExt='Delphi unit|*.pas|Delphi form|*.dfm';
  SOnlyOneInstant='Only one instance of TInstantReport can be created';

// ------------------- dcfdes.pas------------------------
   SAligntoGrid = 'Align To &Grid' ;
   SBringToFront = 'Bring To &Front';
   SSendToBack = 'Send To &Back';
   SDesAlign =  '&Align...';
   SDesSize ='&Size...';
   SDesScale = 'Scal&e...';
   SDesTabOrder = 'Tab &Order...';
   SDesCreationOrder = '&Creation Order...';
   SDesViewAsText = 'View As &Text';

// ----------------- dcstring.pas ----------------------

  SVerbProperties='Properties...';
  SInvalidTabRack='Invalid Tab Rack';
  SReadOnlyStream='Can''t write to read-only stream';
  SErrBlankSearch='The search string can not be blank';
  SErrEmptySel='Tried to search marked block but it is invalid';
  SErrOutsideSel='Tried to search marked block from cursor but cursor is outside block';
  SErrNotFound='Search string ''%s'' not found';
  SAskReplace='Replace this occurence of ''%s''?';
  SAskSaveFile=' Save changes to %s ?';

// ----------------------- dcgen.pas ------------------------------

  SErrStackEmpty = 'Stack is empty';
  SErrPackloaderExists='Package loader already exists in application';
  SErrUnknRegType='This type isn''t supported by WriteToRegistry';

// ---------------------- dcpload.pas --------------

  SErrWithoutPackages='Package Loader will not work if application was compiled without packages';
  SErrorPackageLoad='Error during package %S loading';
  SOnlyOnePackageLoader='Only one instance of TDCPackageLoader can be created';
  SUnkPackageHandle='Unknown package handle';
  SPackAlrregist='Can''t install package %s'#13#10'because package %s has the same base name';

// ---------------------- dcl2.pas --------------

  SErrFileNotFound='File %S not found';

// ---------------------- reswrite.pas --------------

  SError        = #13#10'Error code : %d';
  SErrFileOpen  = 'Can''t open file for writing';
  SErrMap       = 'Can''t map file';
  SErrMapView   = 'Can''t perform MapViewOfFile';
  SErrEXE       = 'Invalid file format';
  SErrNoResources  = 'This file doesn''t contain resources';
  SErrResNotFound  = 'Resource not found';

// ---------------------- dcdbreg.pas --------------

  SLoadDefault = 'Load default parameters?';
  SErrNoAliasOrDriver = 'AliasName or DriverName property should be specified';
  SVerbLoadDefault = 'Load D&efault Parameters...';
  SVerbExecute = 'E&xecute';
  SVerbColumnsEditor = 'Co&lumns Editor...';

// ---------------------- ctrlreg.pas --------------

  SVerbEditPropList='&Edit property list...';
  SVerbPropOrder='&Properties order...';
  SVerbInsertObject= 'Insert Object...';
  SVerbObjectProperties= 'Object Properties...';
  SVerbObjectSettings= 'Object Settings...';
  SVerbNextFrame='&Next frame';
  SVerbPreviousFrame='&Previous frame';
  SVerbNewPage='New Page';
  SVerbNextPage='Next Page';
  SVerbPreviousPage='Previous Page';
  SVerbNewButton='New b&utton';
  SVerbNewSeparator='New se&parator';

  SVerbInputMaskEditor='&Input Mask Editor...';
  SVerbMaskedTextEditor='&Masked Text Editor...';
  SVerbImageEditor='Edit &image..';
  SVerbSectionsEditor='Sectio&ns Editor...';
  SVerbPanelsEditor='&Panels Editor...';
  SVerbItemsEditor='&Items Editor...';
  SVerbLinesEditor = '&Lines Editor...';
  SVerbTabsEditor = '&Tabs Editor...';
  SVerbMenuDesigner='Menu Designer...';
  SVerbBandsEditor='Ban&ds Editor...';
  SVerbObjectInspector='Object Inspector';

  SErrNotImplemented='Not implemented';

// ---------------------- dcmemo.pas --------------

  SLoadColorStyles='Load color styles';
  SSaveColorStyles='Save color styles';
  SErrNotRGBFile='Not a color styles file';


// ---------------------- dcedit.pas --------------

  sErrSelfLink = 'Can''t be linked to itself';
  sErrEmptyPopupClass = 'PopupWindowClass is not specified';
  SSelectDirectory = 'Select Directory';

// ---------------------- dcmenu.pas --------------

  sErrMultipleInstance = 'Only one instance of DCMenu can be placed on the form.';
  sErrInfoAlreadySet   = 'Information for this menuitem is already entered.';
  sErrMainMenuImage    = 'Main menu items can''t contain image';

// ---------------------- dcsplit.pas ---------------

  SVerbSetMinSize='Set MinSize property';


// ---------------------- dctree.pas ---------------
  SConfirmDelete = 'Delete Item(s)?';

// ---------------------- dcdbtree.pas ---------------

  sDatasetName='*.cds';
  sAddFields ='&Add Fields...';
  sAddAllColumns = '&Add All Columns';
  sLoadDefValues = 'Restore defaults';
  sFieldEditor='&Fields Editor...';
  sParamEditor= '&Params Editor...';
  serrNameAlredyExists='Field with name %s alredy exists';
  SReplaceColumns = 'Delete existing columns ?';

// ---------------------- dcpascal.pas ---------------

  SErrExpectedButFound = '%s expected but %s found';
  SErrOrExpected  = '%s or  %s expected';
  SErrFunDefined='Function %s is already defined';
  SErrunkn_id= 'Unknown identifier: %s';
  SErrunexp_writer= 'Unknown variable type during writing program';
  SErrunit_declared= 'Unit %s already defined';
  SErrbad_unit= 'Unit declaration error';
  SErrfun_notfound= 'Function %s not found';
  SErrlinker_error= 'Link Error';
  SErrlabel_already= 'Label <%s> already defined';
  SErrdeclpart= 'Error in declaration block';
  SErrlab_notdef= 'Label <%s> not defined';
  SErrvar_already= 'Variable <%s> already defined';
  SErrbad_varblock= 'Error in variable declaration block';
  SErrvar_NotDef= 'Variable <%s> not defined';
  SErrmeth_decerr= 'Method declaration error';
  SErrbad_methparam= 'Method parameters declaration error';
  SErrno_props= 'Properties not implemented';
  SErronly_class= 'Only class declarations allowed';
  SErr_decl= '%s declaration  error';
  SErrsynt_err='Syntax error at Line: %d  Char: %d'#13#10'%s';
  SErrbad_idName= 'Bad identifier name <%s>';
  SErrbad_id= 'Bad identifier <%s>';
  SErrin_funuse= 'Invalid function usage';
  SErrin_procuse= 'Invalid procedure usage';
  SErrbad_hex= 'Hex constant declaration error';
  SErrcompile_before= 'Compile before run';
  SErrbad_realconst= 'Real constant declaration error';
  SErrbad_charconst= 'String constant declaration error';
  SErrunsup_partype= 'Unsupported parameter type';
  SErrno_resvar= 'Variable Result not found for %s';
  SErrproc_notfound= 'Procedure %s not found';
  SErrpar_notfound= 'Parameter %S not found';
  SErrUnknReaderType='Unknown reader type';
  SErrInvalidParams =' Wrong  number of params';
  SErrInvalidType = 'One of the params is not a valid variant type';
  SErrInvalidProperty  = 'Property does not exist or is readonly';
  SErrInvalidCall = 'Named arguments are not supported';
  SErrParamNotFound = 'Parameter not fond';
  SErrTypeMismatch = 'Parameter type mismatch';
  SErrInvalidInterface = 'Unknown interface';
  SErrParamOmitted = 'A required parameter was omitted';
  SErrUnknown  = 'Unknown error';
  SErrInvCode ='Invalid operation code';



// ---------------------- csDelphi.pas ---------------
  SClientDataFilter = 'Client DataSet (*.cds)|*.cds|All Files (*.*)|*.*';
  SSaveToFile = 'Save to f&ile...';
  SLoadFromFile = '&Load from file...';
  SClientDSAssignData = 'Assign Local &Data...';
// ---------------------- dcactnlst.pas ---------------

  SDefaultCategory = 'None';

// ---------------------- AligUnit.pas ---------------

  SAlignmentpalette  = 'Alignment palette';
  SAlignleft = 'Align left edges';
  SAlignhor = 'Align horizontal centers';
  SCenterHor = 'Center horizontally in window';
  SSpaceeqHor ='Space equally, horizontally';
  SAlignright = 'Align right edges';
  SAligntops = 'Align tops';
  SAlignvert = 'Align vertical centers';
  SCentervert = 'Center vertically in window';
  SSpaceeqVert = 'Space equally, vertically';
  SAlignbottom = 'Align bottoms';
  SVerbStayOnTop = '&Stay on top';
  SVerbHide = 'H&ide';

// ---------------------- DAlign.pas ---------------

  SAlignment  = 'Alignment';
  SHorizontal = ' Horizontal';
  SVertical = ' Vertical';
  SHorizontalAlignment = 'No Change'#13#10'Left Sides'#13#10'Centers'#13#10+
                  'Right Sides'#13#10'Space Equally'#13#10'Center in window';
  SVerticalAlignment = 'No Change'#13#10'Tops'#13#10'Centers'#13#10+
                      'Bottoms'#13#10'Space Equally'#13#10'Center in window';

// ---------------------- DcImgEd.pas ---------------

  SAskSeparateBitmaps= 'Bitmap dimensions for %s are greater than imagelist dimensions. Separate into %d separate bitmap ?';
  SVerbImageListEditor='I&mageList Editor...';
  SSelImage = '&Selected Image';
  STransColor = '&Transparent  Color';
  SFillColor = '&Fill  Color';
  SOptions = 'Options';
  SCrop = 'Cr&op';
  SStretch = 'St&retch';
  SCenter = 'C&enter';
  SApply = 'A&pply';
  SAddImage = '&Add';
  SDelete = '&Delete';
  SClear = '&Clear';

// ---------------------- DcPalFrm.pas ---------------

  SComPal = 'Component Palette';

// ---------------------- dcstrled.pas ---------------

  SOpen = 'Open';
  SCodeEdit = '&Code Edit...';

// ---------------------- dsize.pas ---------------

  SSize  =  'Size';
  SWidth =  ' Width';
  SHeight = ' Height';
  SHorizontalSize ='No Change'#13#10'Shrink to smallest'#13#10'Grow to largest'#13#10'Width:';
  SVerticalSize = 'No Change'#13#10'Shrink to smallest'#13#10'Grow to largest'#13#10'Height:';

// ---------------------- glyphed.pas ---------------

  SCopy = 'Copy';
  SPaste = 'Paste';

// ---------------------- inspunit.pas ---------------

  SInspectorTabs = 'Properties'#13#10'Events';
  SVerbShowCategory = 'Show Categories';
  SVerbDelphiStyle = 'Delphi Style';
  SVerbVBStyle =  'Visual Basic Style';

// ----------------------MaskPr.pas ---------------

  SInputMask = '&Input Mask';
  SCharBlank = 'Character for &Blanks';
  SSaveLiterChar = 'Save &Literal Characters';
  STestInput = '&Test Input';
  SMask = '&Masks...';

// ----------------------MskText.pas ---------------

  SInputText = '&Input text';
  SEditMask = 'Edit Mask';

// ----------------------newfield.pas ---------------

  SFieldName = '&Name';
  SFieldType = '&Type';

// ----------------------packcfg.pas ---------------

  SAddPack = 'Add package/Register ActiveX';
  SRemovePack = 'Remove Package';
  SShowComp = 'Show Components';

// ----------------------pstored.pas ---------------

  SSelectAll = 'Se&lect All';
  SUnselectAll = '&Unselect All';

// ----------------------replunit.pas ---------------

  STextToFind = '&Text to find:';
  SReplaceWith = '&Replace with:';
  SCaseSensitive = '&Case sensitive';
  SWholeWord = '&Whole words only';
  SRegExpr = 'Regular e&xpressions';
  SPropmtRepl = '&Prompt on replace';
  SDirection = 'Direction';
  SForward = 'Forwar&d';
  SBackward = '&Backward';
  SScope = 'Scope';
  SGlobal = '&Global';
  SSelText = '&Selected text';
  SOrigin = 'Origin';
  SFromCursor = '&From cursor';
  SEntireScope = '&Entire scope';
  SReplAll = 'Replace &All';

// ----------------------rerdlg.pas ---------------

  SErrMess = '%s.  Ignore the error and continue?  NOTE: Ignoring the error '+
                  'may cause components to be deleted or property values to be lost.';
  SIgnoreAll = 'Ignore &All';

// ----------------------Searunit.pas ---------------

  SFind = 'Find';

// ----------------------TreeEd.pas ---------------

  SRefresh = 'Refresh';
  SLevelUp = 'One level up';
  SAddItem = 'Add item';
  SAddSubItem = 'Add sub item';
  SDeleteItem = 'Delete item';
  SLargeIcon =  'Large &Icon';
  SSmalIcon  = '&Smal Icon';
  SListStyle = '&List';
  SReportStyle = '&Report';

// ----------------------MainUnit.pas -------------------------

  SFileMenu = '&File';
  SFileNewMenu = '&New...';
  SFileNewAppMenu = 'New Applica&tion';
  SFileNewFormMenu = 'New &Form';
  SFileNewDataModuleMenu = 'New Data &Module';
  SFileOpenMenu = '&Open...';
  SFileOpenWorkspaceMenu = 'Open Workspace...';
  SFileSaveWorkspaceMenu = 'Save Workspace';
  SFileSaveWorkSpaceAsMenu = 'Save WorkSpace As...';
  SFileSaveAllMenu = 'Sa&ve All';
  SFileExportToMenu = '&Export To';
  SFileCloseAllMenu = 'C&lose All';
  SFileUseObjectMenu = '&Use Object...';
  SFileAddtoprojectMenu = 'A&dd to Project...';
  SFileRecentFilesMenu = '&Recent Files';
  SFileRecentWorkSpacesMenu = 'R&ecent WorkSpaces';
  SFilePrintMenu = '&Print...';
  SFileExitMenu = 'E&xit';
  SEditMenu = '&Edit';
  SEditUndoMenu = '&Undo';
  SEditRedoMenu = '&Redo';
  SEditCutMenu = 'Cu&t';
  SEditCopyMenu = '&Copy';
  SEditPasteMenu = '&Paste';
  SEditLockControlsMenu = 'Loc&k Controls';
  SSearchMenu = '&Search';
  SSearchFindMenu = '&Find...';
  SFindinFilesMenu = 'Fin&d in Files...';
  SSearchReplaceMenu = '&Replace...';
  SSearchSearchAgainMenu = '&Search Again';
  SIncrementalSearchMenu = '&Incremental Search';
  SSearchGotoLineMenu = '&Go to Line Number...';
  SViewMenu = '&View';
  SViewProjectManagerMenu = '&Project Manager';
  SViewAlignmentPaletteMenu = '&Alignment Palette';
  SViewToggleFormUnitMenu = 'To&ggle Form/Unit';
  SViewWindowListMenu = 'W&indow List...';
  SViewNewEditWindowMenu = 'New &Edit Window';
  SViewClipboardHistoryMenu = '&Clipboard History';
  SViewPackagesMenu = '&Packages/ActiveX';
  SRunMenu = '&Run';
  SRunQuickRunMenu = '&External Run';
  SRunParametersMenu = '&Parameters...';
  SRunProgramResetMenu = 'Program R&eset';
  SEvaluateModifyMenu = 'E&valuate/Modify';
  SToolsMenuMenu = '&Tools';
  SToolsOptionsItemMenu = 'Environment &Options...';
  SIDEInspectorMenu = 'I&DE Inspector';
  SHelpMenu = '&Help';
  SHelpContentsMenu = '&Contents...';
  SHelpHomePageMenu = '&Home Page';
  SHelpWritetousMenu = '&Write to us';
  SHelpOnlineregMenu = '&Online registration';
  SHelpAboutMenu = '&About...';
  SPopupComponentsMenu = 'C&omponents...';

// ----------------------OptUnit.pas -------------------------

  SPreferences = 'Preferences';
  SVbStyle = 'VB style';
  SDelphiStyle = 'Delphi style';
  SShowCategory = 'Show categories';
  SOInspector = 'Object inspector';
  SSmartPopup = 'Smart popup';
  SEditAliases = 'Edit aliases';
  SFormDesigner = 'Form designer:';
  SGridStepX = 'Grid step &X';
  SGridStepY = 'Grid step &Y';
  SDisplayGrid = 'Display &grid';
  SSnapToGrid  = 'Sna&p to grid';
  SShowCaptions = 'Sho&w component captions';
  SEditor = 'Editor';
  STabStops = '&Tab stops:';
  SBlockIndent = 'Block i&ndent:';
  SKeyMappings = '&Keymapping:';
  SEditorOptions = 'Editor options:';
  SAutoIndentMode= '&Auto indent mode';
  SSmartTab = 'S&mart tab';
  SBackUnindents = 'Backspace &unindents';
  SShowLineNumbers = 'Show &line numbers';
  SShowLineNumbersOnGutter = 'S&how line numbers on gutter';
  SGroupUndo = '&Group undo';
  SCursorBeyondEof = 'Cursor beyond &EOF';
  SPersistentBlocks = '&Persistent blocks';
  SOverwriteBlocks = 'Over&write blocks';
  SDblClickLine = '&Double click line';
  SFindTextAtCursor = 'Find te&xt at cursor';
  SCutCopyEnabled = '&Force cut and copy enabled';
  SSyntaxHighlighting = 'Use s&yntax highlight';

  SCursorByondEol  = '&Cursor beyond EOL';
  SSelectionByondEol = '&Selection beyond EOL';
  SOverCaretBlock   = '&Overwrite cursor as block';
  SDisableDrag  = 'D&isable dragging';

  SDisplay = 'Display';
  SEditFont  = 'Editor &font:';
  SOptionSize =  'Si&ze:';
  SEditMargin = 'Editor margin:';
  SColor  = '&Color:';
  SColor2  = 'C&olor:';
  SStyle  = '&Style:';
  SStyle2  = 'S&tyle:';
  SOptionWidth = '&Width:';
  SOptionWidth2 = 'Wi&dth:';
  SPosition= '&Position:';
  SVisible = '&Visible';
  SVisible2 = 'V&isible';
  SEditGutter = 'Editor gutter:';
  SEditorColor = 'Editor co&lor:';
  SColors = 'Colors';
  SElements = '&Element:';
  SBackColor = 'Ba&ckground color:';
  SForeColor = '&Foreground color:';

  SBoldFont = '&Bold';
  SItalicFont = '&Italic';
  SUnderLineFont = '&Underline';

  SUsedefaults = 'Use defaults for:';
  SForeground = 'F&oreground';
  SBackground = 'Back&ground';

  SProperties = 'Properties';
  SOkButton = 'OK';
  SCancelButton = 'Cancel';
  SHelpButton = '&Help';

  SInspectOptions = 'Inspector';
  SDesignerOptions = 'Designer';

//----------------diffmake.pas------------------------

  SErrCRC='CRC Error';
  SErrSmallBuffer='Buffer size should be at least 4 bytes';

//------------formfill.pas---------------------------

  SErrFillTypeStarted = 'FillType was already started';

//---------editunit.pas--------------------------------------

  SOpenFileatCursor = 'Open &File at Cursor';
  SBrowseSymbolatCursor = '&Browse Symbol at Cursor';
  STopicSearch = 'Topic &Search';
  SToggleBreakpoint = 'Toggle Brea&kpoint';
  SRuntoCursor  =  'R&un to Cursor';
  SAddWatchatCursor =  '&Add Watch at Cursor...';
  SViewasForm = '&View as Form';
  SReadOnly =  'Read &Only';
  SClosePage = '&Close Page';
  SMessageView =  '&Message View';

//new
//---------dcmenu.pas--------------------------------------

  sErrNotAForm = 'DCMenu can be placed only into the form';

//---------dcpascal.pas--------------------------------------

  SErrMisplacedBreak = 'Break outside of loop';
  SErrMisplacedContinue = 'Continue outside of loop';

//---------dcstdctl.pas--------------------------------------

  SErrCircularReference='Circular reference';

//---------dtreeed.pas--------------------------------------

  SNewNode = 'New Node';

//NEW CONSTS

//------------- Info Tree constants -------------------------

  SErrReferencedObject='Object has references from another objects';

  SErrEmptyLink = '%s: Link isn''t specified';
  SIUnknownNotSupported   = 'IUnknown is not supported';
  SIDCRowSetNotSupported  = 'IDCRowSet is not supported';
  SErrActiveObject = 'Object is active. Please close it';
  SErrNonActiveInfoSet = 'InfoSet is not active. Please open it';
  SErrUnsupportedDataType = 'Field "%s" has unsupported data type';
  SErrSetInfoSet='Please set InfoSet property';
  SErrFieldReadOnly='Field "%s" is read only';
  SErrFieldDestroyed='Field "%s" is destroyed';
  SErrHandlerAlreadyExists='Handler already exists';
  SErrHandlerNotExists='Handler does not exist';
  SErrObjectIsNull='Object is NULL';
  SIDCMasterInfoSetNotSupported = 'IDCMasterInfoSet is not supported';
  SErrInsert = 'Cannot insert node';
  SErrChangesNotSupported = 'Infoset doesn''t support modifications';

  //ReliInfoSet messages
  SErrFieldNotFound='Fields "%s" are not found.';

  SErrSetReliItem='Please set %s property';
  SErrCMastAndDetDifferent='Detail and Master fields number mismatch';
  SErrRelFieldNotFound='Fields "%s" are not found.';
  SErrEmptyDisplayField='Empty DisplayName';
  SErrIncompatibleDataType='Data type of master "%s" and detail "%s" are incompatible';

  SErrSetReliItemIndex='Please set %s property. Error in item with index %d';
  SErrCMastAndDetDifferentIndex='Detail and Master fields number mismatch. Error in item with index %d';
  SErrRelFieldNotFoundIndex='Fields "%s" are not found. Error in item with index %d';
  SErrEmptyDisplayFieldIndex='Empty displayName. Error in item with index %d';
  SErrIncompatibleDataTypeIndex='Data type of master "%s" and detail "%s" are incompatible. Error in item with index %d';

  SErrInvalidFilter = 'Incorrectly formed filter expression';
  SErrInvalidFieldType = 'Invalid field type';
  SErrSetDataSet='%s: Please set DataSet property';
  SErrSetRootDataSet='%s: Please set RootDataSet property';
  SErrNotInfoSetDataSet='Value must be TDataSet or InfoSet';

  //InfoDB constants
  SErrUniqueFieldAlreadyRegistered='Unique field already registered';
  SErrUniqueFieldIsNotRegistered='For this DataSet unique field is not registered';
  SErrInvalidBookmark='Invalid bookmark';

  //Memo print messages
  SFileNameUnknown='<Unknown>';
  SFileSelectedBlock='<Selected block>';
  SPrintingPage='Printing page %d from %s';
  SPageCaption='Page %d/%d';
  SMultiDot=' ... ';
  SPrintingOnPrinter='Printing on printer %s';

  //Print progress messages
  SPrintStatus='Printing Status';
  SSearchPrinters='Searching printers ...';
  SPrintProgress='Printing pages:    calculation ...';

  //Print Dialog messages
  SPrintFormCaption='Print';
  SPrintFormCaptionSelection='Print Selection';
  SPrintDestCaption='File To Print:';
  SPrintSelectedBlock='&Print selected block';
  SOptionsCaption='Options:';
  SSetupButton='Se&tup...';
  SHeaderPage='Header/page &number';
  SLineNumber='&Line numbers';
  SSyntaxPrint='&Syntax print';
  SUseColor='Use &color';
  SShowPrintProgress='Show &print progress';
  SWrapLines='&Wrap lines';
  SLeftMargin='Left &margin:';

  SErrScriptLanguageNotSpecified = 'Scripting Language is not specified';

  //TSyntaxScheme
  SCantReadSSchemeFrom = 'Can''t read syntax scheme from ';
  SFromFile = 'file';
  SFromStream = 'stream';
  
  //TSyntaxScheme Editor section
  SSSETitle = 'TSyntaxScheme Editor';
  SSchemeName = 'Scheme &Name:';
  SBlocks = '&Blocks';
  SExtensions = 'E&xtensions';
  SLoad = 'Load';
  SSave = 'Save';
  SLoad1 = '&Load';
  SSave1 = '&Save';
  SSaveAs = 'Save As';
  SClear0 = 'Clear';
  SApply0 = 'Apply';
  SBlkDelimiters = 'Block &Delimiters:';
  SBlkOptions = 'Block Options:';
  SCaseSens = '&Case Sensitive';
  SUseMeta = 'Use &MetaSymbol';
  SMetaEscape = 'for &Escapes';
  SMetaWrapLines = 'to &Wrap Long Lines';
  SStyleText = 'Plain &Text:';
  SUseSymbols = 'Highlight S&ymbols';
  SPageCommon = '&1. Common';
  SPageComments = '&2. Comments';
  SPageFullLine = '&3. FullLine';
  SPageStrings = '&4. Strings';
  SPageNumbers = '&5. Numbers';
  SPageIdents = '&6. Identifiers';
  SPageKeywords = '&7. Keywords';
  SPagePopups = 'Popups';
  SAdd = 'Add';
  SRemove = 'Remove';
  SEdit = 'Edit';
  SAdd1 = '&Add';
  SRemove1 = '&Remove';
  SEdit1 = '&Edit';
  SAdd2 = 'Ad&d';
  SRemove2 = 'Remo&ve';
  SEdit2 = 'Edi&t';
  SStyleButton = 'Style...';
  SUseComments = 'Highlight &Comments';
  SUseCommentsSL = 'S&ingle-line Comments';
  SUseCommentsML = '&Multi-line Comments';
  SUseCommentsFL = '&Full-line Comments';
  SUseDirectives = 'Highlight &Directives';
  SUseStrings = 'Highlight Strin&gs';
  SUseStringsSL = 'S&ingle-line Strings';
  SUseStringsML = '&Multi-line Strings';
  SUseNumbers = 'Highlight N&umbers';
  SIntNum = 'Inte&gers:';
  SFloatNum = 'Floa&ts:';
  SHexNum = '&Hexadecimal:';
  SPSNumbers = ' Special: ';
  SWithPrefix = 'with &prefix';
  SWithSuffix = 'with su&ffix';
  SWithPS = 'w&ith prefix && suffix';
  SWithPrefixes = 'with prefix&es';
  SWithSuffixes = 'with suffix&es';
  SWithPSs = 'with prefix&es and suffixes';
  SMultiSuffixes = 'multiple suffixes allo&wed';
  SPSComposition = 'use &composition of P && S';
  SUseIdentifiers = 'Highlight Iden&tifiers';
  SSpecIdents = 'Special Identifiers && Keywords:';
  SUseKeywords = 'Highlight &Keywords:';
  SKWSets = ' Sets: ';
  SCurKWSets = ' Current Keywords Set: ';
  SFontName = 'Font &Name:';
  SFontSize = 'Font Si&ze:';
  SFontColor = 'Font &Color:';
  SFontStyles = 'Font Styles:';
  SBackColor1 = 'Background &Color:';
  SBold = '&Bold';
  SItalic = '&Italic';
  SUnderline = '&Underline';
  SStrikeout = '&Strikeout';
  SUseDefFont = 'Use Default Font';
  SUseDefBack = 'Use Default Background';
  SArePartOfBlock = 'Are &part of block';
  SSelectBlock = '&Select block:';
  SFilterScheme = 'Syntax Scheme files (*.sch)|*.sch|All files (*.*)|*.*';
  SFilterKeywords = 'Text files (*.txt)|*.txt|All files (*.*)|*.*';
  SCaptionSet = 'Set:';
  SCaptionKeyword = '&Keyword:';
  SCaptionDelimiter = '&Delimiter:';
  SCaptionLeftDlmtr = '&Left Delimiter:';
  SCaptionRightDlmtr = '&Right Delimiter:';
  SCaptionPrefix = 'Prefix:';
  SCaptionSuffix = 'Suffix:';
  SCaptionBlock = '&Block:';
  SCaptionParent = '&Parent:';
  SCaptionExt = 'E&xtension:';
  SQueryRemoveBlock = 'Do you really want to remove syntax block';
  SQueryRemoveKWSet = 'Do you really want to remove keyword set';
  SAnd = ' and ';
  
